#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_63602f4 _public_63602f4

PROC_DECLARE(0x63602e0, internal_63602e0, public_63602e0);
extern "C" NAKED register_t __cdecl internal_63602e0()
{
    __asm
    {
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        cmp ebx, 1
        push esi
        push edi
        mov esi, ecx
        jne public_63602f4
        inc dword ptr ds : [esi+0x14]
        public_63602f4 : nop
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_639910c]
        lea ecx, ss:[esp+0x14]
        push ecx
        call dword ptr ds : [public_63990fc]
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ds : [esi+8]
        mov edx, eax
        sub edx, ecx
        mov dword ptr ss : [esp+0x20], edx
        fild dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [esi+0x10]
        mov dword ptr ds : [esi+8], eax
        mov eax, dword ptr ss : [esp+0x10]
        fmul qword ptr ds : [public_63a5730]
        lea edi, ds:[esi+ecx*8+0x18]
        fild qword ptr ss : [esp+0x14]
        mov dword ptr ds : [esi+0xC], eax
        fdivp 
        fiadd dword ptr ds : [edi]
        call public_6391dae
        mov dword ptr ds : [edi], eax
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        pop esi
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x63602e0)
    }
}

#undef public_63602f4
