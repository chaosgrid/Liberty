#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6215f40);
CLANG_FORWARD_PROC_SYMBOL(public_6217ae0);
CLANG_FORWARD_PROC_SYMBOL(public_623ec90);
CLANG_FORWARD_JUMP_SYMBOL(public_62482b0);

#define public_6215fa0 _public_6215fa0
#define public_6216033 _public_6216033
#define public_6216035 _public_6216035
#define public_6216052 _public_6216052
#define public_621605f _public_621605f

PROC_DECLARE(0x6215f40, internal_6215f40, public_6215f40);
extern "C" NAKED register_t __cdecl internal_6215f40()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_62482b0 @0x6215f48*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_62482b0
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov eax, dword ptr ds : [public_6257a14]
        mov dword ptr fs : [0], esp
        sub esp, 0x7C
        test eax, eax
        push ebx
        push esi
        push edi
        jne public_6215fa0
        mov eax, dword ptr ds : [public_6257a18]
        mov ecx, dword ptr ds : [public_6257a08]
        sub eax, ecx
        mov edi, dword ptr ds : [public_6257a04]
        shr eax, 3
        imul eax, dword ptr ds : [public_6257a0c]
        mov ecx, dword ptr ds : [eax+edi+8]
        add eax, edi
        push ecx
        add ecx, 0xD8
        mov edx, esp
        mov dword ptr ss : [esp+0x10], esp
        mov dword ptr ds : [edx], eax
        lea eax, ss:[esp+0x10]
        push eax
        call public_6217ae0
        public_6215fa0 : nop
        mov dword ptr ss : [esp+0x30], 0
        mov ebx, dword ptr ss : [esp+0x98]
        mov ecx, 0xC
        lea esi, ss:[esp+0x28]
        lea edi, ss:[esp+0x58]
        rep movsd
        mov esi, dword ptr ss : [esp+0x9C]
        mov ecx, 6
        lea edi, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x90], 0
        rep movsd
        mov ecx, dword ptr ds : [ebx+0xE0]
        mov byte ptr ss : [esp+0x90], 1
        call public_623ec90
        test eax, eax
        je public_6216033
        fld dword ptr ds : [public_624bac4]
        fdiv dword ptr ss : [esp+0xA4]
        mov edx, dword ptr ss : [esp+0xA4]
        lea edi, ds:[eax+0xC]
        mov ecx, 6
        lea esi, ss:[esp+0x10]
        rep movsd
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [eax+8], ebx
        test ebx, ebx
        mov dword ptr ds : [eax+0x24], ecx
        mov dword ptr ds : [eax+0x28], edx
        fstp dword ptr ds : [eax+0x2C]
        je public_6216035
        inc dword ptr ds : [ebx+0xE4]
        jmp public_6216035
        public_6216033 : nop
        xor eax, eax
        public_6216035 : nop
        mov dword ptr ds : [eax], 0
        mov ecx, dword ptr ds : [ebx+0xDC]
        test ecx, ecx
        je public_6216052
        mov dword ptr ds : [ecx], eax
        mov ecx, dword ptr ds : [ebx+0xDC]
        mov dword ptr ds : [eax+4], ecx
        jmp public_621605f
        public_6216052 : nop
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [ebx+0xD8], eax
        public_621605f : nop
        mov ecx, dword ptr ss : [esp+0x88]
        pop edi
        mov dword ptr ds : [ebx+0xDC], eax
        pop esi
        xor eax, eax
        mov dword ptr fs : [0], ecx
        pop ebx
        add esp, 0x88
        ret 0x10
        UNREACHABLE_TRAP(0x6215f40)
    }
}

#undef public_6215fa0
#undef public_6216033
#undef public_6216035
#undef public_6216052
#undef public_621605f
