#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_626d000);
CLANG_FORWARD_PROC_SYMBOL(public_62ed730);
CLANG_FORWARD_PROC_SYMBOL(public_62f1670);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392708);

#define public_626d043 _public_626d043
#define public_626d050 _public_626d050
#define public_626d05f _public_626d05f
#define public_626d093 _public_626d093

PROC_DECLARE(0x626d000, internal_626d000, public_626d000);
extern "C" NAKED register_t __cdecl internal_626d000()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392708 @0x626d002*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392708
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebp
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ss : [esp+0x14], esi
        mov eax, dword ptr ds : [esi+0x138]
        mov ebp, dword ptr ds : [esi+0x134]
        xor edi, edi
        cmp ebp, eax
        mov dword ptr ss : [esp+0x20], edi
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0xC], ebp
        je public_626d093
        add ebp, 8
        push ebx
        public_626d043 : nop
        mov ebx, dword ptr ss : [ebp+4]
        mov edi, dword ptr ss : [ebp]
        cmp edi, ebx
        lea esi, ss:[ebp-4]
        je public_626d05f
        public_626d050 : nop
        push edi
        mov ecx, esi
        call public_62ed730
        add edi, 4
        cmp edi, ebx
        jne public_626d050
        public_626d05f : nop
        mov eax, dword ptr ds : [esi+4]
        push eax
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x18]
        xor eax, eax
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], eax
        mov eax, dword ptr ss : [esp+0x14]
        add eax, 0x14
        add esp, 4
        add ebp, 0x14
        cmp eax, ecx
        mov dword ptr ss : [esp+0x10], eax
        jne public_626d043
        mov esi, dword ptr ss : [esp+0x18]
        xor edi, edi
        pop ebx
        public_626d093 : nop
        mov eax, dword ptr ds : [esi+0x134]
        push eax
        call public_6391d5a
        add esp, 4
        mov ecx, esi
        mov dword ptr ds : [esi+0x134], edi
        mov dword ptr ds : [esi+0x138], edi
        mov dword ptr ds : [esi+0x13C], edi
        mov dword ptr ss : [esp+0x20], 0xFFFFFFFF
        call public_62f1670
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x626d000)
    }
}

#undef public_626d043
#undef public_626d050
#undef public_626d05f
#undef public_626d093
