#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63557c0);
CLANG_FORWARD_PROC_SYMBOL(public_63557e0);

#define public_63557ef _public_63557ef
#define public_6355803 _public_6355803
#define public_635580c _public_635580c
#define public_635583a _public_635583a
#define public_635583d _public_635583d
#define public_635584a _public_635584a
#define public_635585c _public_635585c
#define public_635585f _public_635585f
#define public_6355868 _public_6355868
#define public_635587e _public_635587e
#define public_6355881 _public_6355881

PROC_DECLARE(0x63557e0, internal_63557e0, public_63557e0);
extern "C" NAKED register_t __cdecl internal_63557e0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        xor eax, eax
        mov esi, ecx
        mov ax, word ptr ds : [esi+0x26]
        push edi
        dec eax
        js public_6355803
        public_63557ef : nop
        dec eax
        mov ecx, dword ptr ds : [esi+0x28]
        mov edx, dword ptr ds : [ecx+eax*4+4]
        mov dword ptr ds : [edx+0x1B0], 0
        jns public_63557ef
        public_6355803 : nop
        xor ebp, ebp
        mov bp, word ptr ds : [esi+0x36]
        dec ebp
        js public_635583d
        public_635580c : nop
        mov eax, dword ptr ds : [esi+0x38]
        mov eax, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ds : [eax+0x28]
        mov edi, dword ptr ds : [eax+0x2C]
        test byte ptr ds : [ecx], 0xC
        jne public_635583a
        test byte ptr ds : [edi], 0xC
        jne public_635583a
        call public_63557c0
        mov ecx, edi
        mov ebx, eax
        call public_63557c0
        cmp ebx, eax
        je public_635583a
        mov dword ptr ds : [eax+0x1B0], ebx
        public_635583a : nop
        dec ebp
        jns public_635580c
        public_635583d : nop
        xor edi, edi
        mov di, word ptr ds : [esi+0x26]
        xor ebx, ebx
        xor ebp, ebp
        dec edi
        js public_635585f
        public_635584a : nop
        mov ecx, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [ecx+edi*4]
        test byte ptr ds : [ecx], 0xC
        jne public_635585c
        call public_63557c0
        mov ebx, eax
        public_635585c : nop
        dec edi
        jns public_635584a
        public_635585f : nop
        xor edi, edi
        mov di, word ptr ds : [esi+0x26]
        dec edi
        js public_6355881
        public_6355868 : nop
        mov edx, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [edx+edi*4]
        test byte ptr ds : [ecx], 0xC
        jne public_635587e
        call public_63557c0
        cmp eax, ebx
        je public_635587e
        mov ebp, eax
        public_635587e : nop
        dec edi
        jns public_6355868
        public_6355881 : nop
        pop edi
        pop esi
        mov eax, ebp
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x63557e0)
    }
}

#undef public_63557ef
#undef public_6355803
#undef public_635580c
#undef public_635583a
#undef public_635583d
#undef public_635584a
#undef public_635585c
#undef public_635585f
#undef public_6355868
#undef public_635587e
#undef public_6355881
