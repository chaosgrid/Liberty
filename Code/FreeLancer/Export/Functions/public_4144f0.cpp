#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4144f0);

#define public_414513 _public_414513
#define public_414520 _public_414520
#define public_414534 _public_414534
#define public_414540 _public_414540
#define public_41454b _public_41454b
#define public_414552 _public_414552

PROC_DECLARE(0x4144f0, internal_4144f0, public_4144f0);
extern "C" NAKED register_t __cdecl internal_4144f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov eax, dword ptr ds : [edi]
        test eax, eax
        je public_414513
        push eax
        call dword ptr ds : [public_5c71d8]
        add esp, 4
        mov dword ptr ds : [edi], 0
        mov dword ptr ds : [edi+4], 0
        public_414513 : nop
        mov ecx, dword ptr ds : [edi+0x14]
        mov esi, dword ptr ds : [edi+0x10]
        mov eax, ecx
        cmp eax, ecx
        je public_414534
        nop 
        public_414520 : nop
        mov edx, dword ptr ds : [eax]
        mov dword ptr ds : [esi], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+4], edx
        add eax, 8
        add esi, 8
        cmp eax, ecx
        jne public_414520
        public_414534 : nop
        mov ebp, dword ptr ds : [edi+0x14]
        cmp esi, ebp
        mov ebx, esi
        je public_414552
        lea ecx, ds:[ecx]
        public_414540 : nop
        mov ecx, dword ptr ds : [ebx]
        test ecx, ecx
        je public_41454b
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+4]
        public_41454b : nop
        add ebx, 8
        cmp ebx, ebp
        jne public_414540
        public_414552 : nop
        mov dword ptr ds : [edi+0x14], esi
        mov dword ptr ds : [edi+0x28], 0
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x4144f0)
    }
}

#undef public_414513
#undef public_414520
#undef public_414534
#undef public_414540
#undef public_41454b
#undef public_414552
