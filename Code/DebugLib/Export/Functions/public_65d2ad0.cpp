#include "DebugLib-PCH.h"


#define public_65d2ae3 _public_65d2ae3
#define public_65d2ae5 _public_65d2ae5
#define public_65d2b09 _public_65d2b09
#define public_65d2b0d _public_65d2b0d
#define public_65d2b12 _public_65d2b12
#define public_65d2b22 _public_65d2b22
#define public_65d2b38 _public_65d2b38
#define public_65d2b64 _public_65d2b64

PROC_DECLARE(0x65d2ad0, internal_65d2ad0, public_65d2ad0);
extern "C" NAKED register_t __cdecl internal_65d2ad0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e12e8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65d2b22
        mov ebp, dword ptr ss : [esp+0x18]
        public_65d2ae3 : nop
        mov esi, ebp
        public_65d2ae5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d2b0d
        test cl, cl
        je public_65d2b09
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d2b0d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d2ae5
        public_65d2b09 : nop
        xor eax, eax
        jmp public_65d2b12
        public_65d2b0d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d2b12 : nop
        test eax, eax
        je public_65d2b38
        mov eax, dword ptr ds : [edi*8+public_65e12f0]
        inc edi
        test eax, eax
        jne public_65d2ae3
        public_65d2b22 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65d2b38 : nop
        mov eax, dword ptr ds : [edi*8+public_65e12ec]
        test eax, eax
        jns public_65d2b64
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d2b64 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65d2ad0)
    }
}

#undef public_65d2ae3
#undef public_65d2ae5
#undef public_65d2b09
#undef public_65d2b0d
#undef public_65d2b12
#undef public_65d2b22
#undef public_65d2b38
#undef public_65d2b64
