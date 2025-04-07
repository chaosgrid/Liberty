#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6355490);

#define public_63568b2 _public_63568b2
#define public_63568c9 _public_63568c9
#define public_63568d2 _public_63568d2
#define public_63568e4 _public_63568e4
#define public_63568e9 _public_63568e9
#define public_6356900 _public_6356900

PROC_DECLARE(0x63568a0, internal_63568a0, public_63568a0);
extern "C" NAKED register_t __cdecl internal_63568a0()
{
    __asm
    {
        push ebx
        push ebp
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+4]
        xor ebp, ebp
        mov bp, word ptr ds : [eax+0x36]
        dec ebp
        js public_63568e9
        push esi
        push edi
        public_63568b2 : nop
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [ecx+0x38]
        mov edi, dword ptr ds : [edx+ebp*4]
        mov eax, dword ptr ss : [esp+0x14]
        cmp dword ptr ds : [edi+0x28], eax
        je public_63568c9
        cmp dword ptr ds : [edi+0x2C], eax
        jne public_63568e4
        public_63568c9 : nop
        xor esi, esi
        mov si, word ptr ds : [edi+2]
        dec esi
        js public_63568e4
        public_63568d2 : nop
        mov eax, dword ptr ds : [edi+4]
        mov ecx, dword ptr ds : [eax+esi*4]
        push ecx
        mov ecx, dword ptr ds : [ebx+4]
        call public_6355490
        dec esi
        jns public_63568d2
        public_63568e4 : nop
        dec ebp
        jns public_63568b2
        pop edi
        pop esi
        public_63568e9 : nop
        mov ecx, dword ptr ds : [ebx+4]
        cmp word ptr ds : [ecx+0x3E], 0
        pop ebp
        pop ebx
        jne public_6356900
        test ecx, ecx
        je public_6356900
        mov edx, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [edx+0x18]
        public_6356900 : nop
        ret 4
        UNREACHABLE_TRAP(0x63568a0)
    }
}

#undef public_63568b2
#undef public_63568c9
#undef public_63568d2
#undef public_63568e4
#undef public_63568e9
#undef public_6356900
