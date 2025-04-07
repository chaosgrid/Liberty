#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_403ff0);
CLANG_FORWARD_PROC_SYMBOL(public_4058c0);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);

#define public_404010 _public_404010
#define public_404028 _public_404028
#define public_404056 _public_404056

PROC_DECLARE(0x403ff0, internal_403ff0, public_403ff0);
extern "C" NAKED register_t __cdecl internal_403ff0()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+0x10]
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        cmp esi, eax
        mov dword ptr ss : [esp+4], ecx
        je public_404056
        push ebx
        push ebp
        push edi
        mov edi, dword ptr ss : [esp+0x18]
        lea esp, ss:[esp]
        public_404010 : nop
        mov ebx, dword ptr ds : [edi+4]
        push 0x18
        lea ebp, ds:[esi+8]
        call public_418a9e
        add esp, 4
        test ebx, ebx
        mov dword ptr ds : [eax], edi
        jne public_404028
        mov ebx, eax
        public_404028 : nop
        mov dword ptr ds : [eax+4], ebx
        mov dword ptr ds : [edi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx], eax
        add eax, 8
        push ebp
        push eax
        call public_4058c0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [eax+8]
        add esp, 8
        inc ecx
        mov dword ptr ds : [eax+8], ecx
        mov esi, dword ptr ds : [esi]
        cmp esi, dword ptr ss : [esp+0x20]
        jne public_404010
        pop edi
        pop ebp
        pop ebx
        public_404056 : nop
        pop esi
        pop ecx
        ret 0xC
        UNREACHABLE_TRAP(0x403ff0)
    }
}

#undef public_404010
#undef public_404028
#undef public_404056
