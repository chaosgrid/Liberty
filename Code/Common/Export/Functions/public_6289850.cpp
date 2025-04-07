#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6289850);
CLANG_FORWARD_PROC_SYMBOL(public_628f060);
CLANG_FORWARD_PROC_SYMBOL(public_634bca0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_63933c1);

#define public_62898d0 _public_62898d0
#define public_62898d2 _public_62898d2
#define public_62898e4 _public_62898e4
#define public_62898ea _public_62898ea

PROC_DECLARE(0x6289850, internal_6289850, public_6289850);
extern "C" NAKED register_t __cdecl internal_6289850()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_63933c1 @0x6289852*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_63933c1
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xC
        push ebx
        push esi
        lea esi, ds:[ecx+4]
        push edi
        mov dword ptr ss : [esp+0x10], esi
        mov eax, dword ptr ds : [esi+0x30]
        mov ecx, dword ptr ds : [eax]
        lea edi, ds:[esi+0x2C]
        push eax
        push ecx
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], 3
        call public_628f060
        mov eax, dword ptr ds : [edi+4]
        push eax
        call public_6391d5a
        mov eax, dword ptr ds : [edi+8]
        xor ebx, ebx
        push eax
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+0x10], ebx
        call public_6391d5a
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+0x20]
        push eax
        call public_6391d5a
        add esp, 0xC
        cmp esi, ebx
        mov dword ptr ds : [esi+0x20], ebx
        mov dword ptr ds : [esi+0x24], ebx
        mov dword ptr ds : [esi+0x28], ebx
        mov byte ptr ss : [esp+0x20], 1
        je public_62898d0
        lea ecx, ds:[esi+0xC]
        jmp public_62898d2
        public_62898d0 : nop
        xor ecx, ecx
        public_62898d2 : nop
        call public_634bca0
        cmp esi, ebx
        je public_62898e4
        mov dword ptr ds : [esi+4], offset public_639c2a0
        jmp public_62898ea
        public_62898e4 : nop
        mov dword ptr ds : [ebx], offset public_639c2a0
        public_62898ea : nop
        mov ecx, dword ptr ss : [esp+0x18]
        pop edi
        mov dword ptr ds : [esi], offset public_639c288
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x18
        ret 
        UNREACHABLE_TRAP(0x6289850)
    }
}

#undef public_62898d0
#undef public_62898d2
#undef public_62898e4
#undef public_62898ea
