#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630e210);
CLANG_FORWARD_PROC_SYMBOL(public_630e270);
CLANG_FORWARD_PROC_SYMBOL(public_6334430);
CLANG_FORWARD_JUMP_SYMBOL(public_639748c);

#define public_632ddf0 _public_632ddf0
#define public_632de07 _public_632de07
#define public_632de12 _public_632de12

PROC_DECLARE(0x632ddb0, internal_632ddb0, public_632ddb0);
extern "C" NAKED register_t __cdecl internal_632ddb0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_639748c @0x632ddb2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_639748c
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0xC], esi
        mov eax, dword ptr ds : [esi+0x118]
        xor edi, edi
        test eax, eax
        mov dword ptr ss : [esp+0x18], 1
        jle public_632de07
        lea ebx, ds:[esi+0x98]
        lea esp, ss:[esp]
        public_632ddf0 : nop
        push ebx
        call public_6334430
        mov eax, dword ptr ds : [esi+0x118]
        add esp, 4
        inc edi
        add ebx, 4
        cmp edi, eax
        jl public_632ddf0
        public_632de07 : nop
        lea edi, ds:[esi+0x11C]
        mov ebx, 0x20
        public_632de12 : nop
        push edi
        call public_6334430
        add esp, 4
        add edi, 4
        dec ebx
        jne public_632de12
        lea edi, ds:[esi+0x22C]
        mov ecx, edi
        call public_630e270
        add esi, 0x244
        mov ecx, esi
        call public_630e270
        mov ecx, esi
        mov byte ptr ss : [esp+0x18], 0
        call public_630e210
        mov ecx, edi
        mov dword ptr ss : [esp+0x18], 0xFFFFFFFF
        call public_630e210
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x632ddb0)
    }
}

#undef public_632ddf0
#undef public_632de07
#undef public_632de12
