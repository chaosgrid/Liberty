#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cecb50);
CLANG_FORWARD_PROC_SYMBOL(public_6cfc340);
CLANG_FORWARD_PROC_SYMBOL(public_6d032b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d03740);
CLANG_FORWARD_PROC_SYMBOL(public_6d038a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d038c0);
CLANG_FORWARD_PROC_SYMBOL(public_6d052a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d05320);
CLANG_FORWARD_PROC_SYMBOL(public_6d05de0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15d10);
CLANG_FORWARD_JUMP_SYMBOL(public_6d60f98);

#define public_6d032ff _public_6d032ff
#define public_6d03395 _public_6d03395
#define public_6d033a1 _public_6d033a1
#define public_6d033af _public_6d033af
#define public_6d033b5 _public_6d033b5

PROC_DECLARE(0x6d032b0, internal_6d032b0, public_6d032b0);
extern "C" NAKED register_t __cdecl internal_6d032b0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d60f98 @0x6d032b8*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d60f98
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x40
        lea eax, ss:[esp+0x50]
        push eax
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, offset public_6d8d980
        call public_6d15d10
        mov eax, dword ptr ss : [esp]
        cmp eax, dword ptr ds : [public_6d8d984]
        je public_6d032ff
        inc dword ptr ds : [eax+0x24]
        mov eax, 2
        mov ecx, dword ptr ss : [esp+0x40]
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        public_6d032ff : nop
        mov dl, byte ptr ss : [esp+0x50]
        push ebx
        push esi
        push edi
        xor ebx, ebx
        push ebx
        push ebx
        lea ecx, ss:[esp+0x24]
        mov byte ptr ss : [esp+0x24], dl
        call public_6cfc340
        mov dword ptr ss : [esp+0x20], eax
        mov dword ptr ss : [esp+0x24], ebx
        mov dword ptr ss : [esp+0x28], ebx
        mov dword ptr ss : [esp+0x2C], ebx
        mov dword ptr ss : [esp+0x18], ebx
        mov eax, dword ptr ss : [esp+0x5C]
        lea ecx, ss:[esp+0x1C]
        push ecx
        lea ecx, ss:[esp+0x3C]
        mov dword ptr ss : [esp+0x58], ebx
        mov dword ptr ss : [esp+0x34], eax
        mov dword ptr ss : [esp+0x38], ebx
        call public_6d052a0
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x44], edx
        mov dword ptr ss : [esp+0x48], eax
        lea ecx, ss:[esp+0x30]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, offset public_6d8d980
        mov byte ptr ss : [esp+0x5C], 1
        call public_6d05de0
        lea ecx, ss:[esp+0x34]
        mov byte ptr ss : [esp+0x54], bl
        call public_6d03740
        mov ecx, dword ptr ss : [esp+0x18]
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x54], 2
        je public_6d03395
        call dword ptr ds : [public_6d64618]
        public_6d03395 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [eax]
        cmp esi, eax
        mov edi, eax
        je public_6d033b5
        public_6d033a1 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_6d033af
        push 1
        call public_6d038a0
        public_6d033af : nop
        mov esi, dword ptr ds : [esi]
        cmp esi, edi
        jne public_6d033a1
        public_6d033b5 : nop
        lea ecx, ss:[esp+0x1C]
        call public_6d05320
        lea ecx, ss:[esp+0x1C]
        mov dword ptr ss : [esp+0x54], 0xFFFFFFFF
        call public_6cecb50
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [eax+0x24]
        lea ecx, ds:[eax+0x10]
        mov eax, dword ptr ss : [esp+0x60]
        inc esi
        mov dword ptr ds : [ecx+0x14], esi
        mov edx, dword ptr ss : [esp+0x5C]
        push eax
        mov dword ptr ds : [ecx+0x10], edx
        call public_6d038c0
        mov ecx, dword ptr ss : [esp+0x4C]
        pop edi
        pop esi
        mov eax, 1
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x6d032b0)
    }
}

#undef public_6d032ff
#undef public_6d03395
#undef public_6d033a1
#undef public_6d033af
#undef public_6d033b5
