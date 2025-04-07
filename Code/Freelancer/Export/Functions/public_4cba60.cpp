#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cba60);

#define public_4cbacd _public_4cbacd
#define public_4cbb17 _public_4cbb17
#define public_4cbb32 _public_4cbb32

PROC_DECLARE(0x4cba60, internal_4cba60, public_4cba60);
extern "C" NAKED register_t __cdecl internal_4cba60()
{
    __asm
    {
        push ecx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi]
        test ecx, ecx
        je public_4cbb32
        fld dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [public_5c6d58]
        fmul dword ptr ds : [esi+0x264]
        push ebp
        push edi
        lea edi, ss:[esp+0xC]
        push edi
        fstp dword ptr ss : [esp+0x18]
        or ebp, 0xFFFFFFFF
        mov dword ptr ss : [esp+0x10], ebp
        mov eax, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x48]
        mov edi, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_5c6d40]
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [esi]
        test eax, eax
        mov dword ptr ss : [esp+0x14], ebp
        je public_4cbacd
        mov ecx, dword ptr ds : [public_5c6d58]
        mov ecx, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx]
        lea ebp, ss:[esp+0x14]
        push ebp
        push eax
        push ecx
        call dword ptr ds : [edx+0x48]
        public_4cbacd : nop
        mov eax, dword ptr ds : [public_5c6d90]
        mov edx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edi
        push 0
        push edx
        push eax
        call dword ptr ds : [ecx+0x6C]
        mov eax, dword ptr ds : [public_5c6d58]
        lea edx, ss:[esp+0x14]
        push edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x18], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x68]
        mov eax, dword ptr ss : [esp+0x14]
        test eax, eax
        pop edi
        pop ebp
        jne public_4cbb32
        lea ecx, ds:[esi+0x254]
        lea eax, ds:[esi+0x44]
        mov edx, 4
        public_4cbb17 : nop
        mov dword ptr ds : [eax], 0
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [ecx], 0xFFFFFFFF
        add ecx, 4
        add eax, 0x84
        dec edx
        jne public_4cbb17
        public_4cbb32 : nop
        pop esi
        pop ecx
        ret 4
        UNREACHABLE_TRAP(0x4cba60)
    }
}

#undef public_4cbacd
#undef public_4cbb17
#undef public_4cbb32
