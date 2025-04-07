#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_415ff0);
CLANG_FORWARD_PROC_SYMBOL(public_416440);
CLANG_FORWARD_PROC_SYMBOL(public_418a9e);
CLANG_FORWARD_PROC_SYMBOL(public_418ab6);
CLANG_FORWARD_PROC_SYMBOL(public_418abc);
CLANG_FORWARD_JUMP_SYMBOL(public_419cea);

#define public_4063f3 _public_4063f3
#define public_4063f5 _public_4063f5
#define public_406419 _public_406419
#define public_40642c _public_40642c

PROC_DECLARE(0x406370, internal_406370, public_406370);
extern "C" NAKED register_t __cdecl internal_406370()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_419cea @0x406372*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_419cea
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr ds : [public_41bbe8]
        push edi
        push 0
        push 0
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0x84]
        push 0x188
        push eax
        call esi
        cmp eax, 0xFFFFFFFF
        jle public_40642c
        mov ecx, dword ptr ds : [ebx+0x84]
        push 0
        push eax
        push 0x199
        push ecx
        call esi
        mov edi, eax
        push edi
        call public_416440
        mov esi, eax
        add esp, 4
        test esi, esi
        jne public_406419
        push 0x124
        call public_418a9e
        add esp, 4
        mov dword ptr ss : [esp+0xC], eax
        test eax, eax
        mov dword ptr ss : [esp+0x18], esi
        je public_4063f3
        push esi
        mov ecx, eax
        call public_415ff0
        mov esi, eax
        jmp public_4063f5
        public_4063f3 : nop
        xor esi, esi
        public_4063f5 : nop
        push 0
        push 0x95
        mov ecx, esi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        mov dword ptr ds : [esi+0x60], edi
        call public_418abc
        push 5
        mov ecx, esi
        call public_418ab6
        jmp public_40642c
        public_406419 : nop
        push 5
        mov ecx, esi
        call public_418ab6
        mov edx, dword ptr ds : [esi+0x20]
        push edx
        call dword ptr ds : [public_41bbec]
        public_40642c : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x406370)
    }
}

#undef public_4063f3
#undef public_4063f5
#undef public_406419
#undef public_40642c
