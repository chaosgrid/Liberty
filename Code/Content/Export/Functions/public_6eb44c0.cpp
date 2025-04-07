#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eac680);
CLANG_FORWARD_PROC_SYMBOL(public_6eb40c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb44c0);
CLANG_FORWARD_PROC_SYMBOL(public_6eb5f50);
CLANG_FORWARD_PROC_SYMBOL(public_6eb6240);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_JUMP_SYMBOL(public_6faa17b);

#define public_6eb4500 _public_6eb4500
#define public_6eb464a _public_6eb464a
#define public_6eb4663 _public_6eb4663

PROC_DECLARE(0x6eb44c0, internal_6eb44c0, public_6eb44c0);
extern "C" NAKED register_t __cdecl internal_6eb44c0()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        mov ecx, dword ptr ss : [esp+4]
        push 0xFFFFFFFF
/*FIXUP push public_6faa17b @0x6eb44cc*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6faa17b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x88
        call dword ptr ds : [public_6fb3024]
        test al, al
        je public_6eb4663
        push ebx
        push ebp
        mov ebp, dword ptr ds : [public_6fb3068]
        push esi
        push edi
        mov edi, dword ptr ds : [public_6fb3034]
        xor esi, esi
        nop 
        public_6eb4500 : nop
        mov ecx, dword ptr ss : [esp+0xA8]
/*FIXUP push offset public_6fb4600 @0x6eb4507*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb4600
        call dword ptr ds : [public_6fb301c]
        test al, al
        je public_6eb464a
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ss : [esp+0x18], al
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        mov ebx, dword ptr ds : [public_6fb3080]
        lea ecx, ss:[esp+0x30]
        mov dword ptr ss : [esp+0xA0], esi
        call ebx
        lea ecx, ss:[esp+0x34]
        call ebx
        lea ecx, ss:[esp+0x38]
        mov dword ptr ss : [esp+0x14], ecx
        lea ecx, ss:[esp+0x44]
        call public_6eac680
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0xA0], 1
        call public_6eac680
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0xA0], 2
        call public_6eac680
        lea ecx, ss:[esp+0x38]
        mov byte ptr ss : [esp+0xA0], 3
        call public_6eb5f50
        mov dword ptr ss : [esp+0x28], esi
        mov dword ptr ss : [esp+0x2C], 0x2A
        mov eax, dword ptr ss : [esp+0xA8]
        lea edx, ss:[esp+0x18]
        push edx
        push eax
        mov dword ptr ss : [esp+0xA8], 4
        call public_6eb40c0
        mov edx, dword ptr ds : [public_6fcef2c]
        add esp, 8
        lea ecx, ss:[esp+0x18]
        push ecx
        push 1
        push edx
        mov ecx, offset public_6fcef24
        call public_6eb6240
        mov ebx, 5
        lea eax, ss:[esp+0x38]
        mov dword ptr ss : [esp+0xA0], ebx
        mov dword ptr ss : [esp+0x14], eax
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0xA0], 8
        call ebp
        lea ecx, ss:[esp+0x5C]
        call ebp
        lea ecx, ss:[esp+0x74]
        call ebp
        lea ecx, ss:[esp+0x74]
        mov byte ptr ss : [esp+0xA0], 7
        call edi
        lea ecx, ss:[esp+0x5C]
        mov byte ptr ss : [esp+0xA0], 6
        call edi
        lea ecx, ss:[esp+0x44]
        mov byte ptr ss : [esp+0xA0], bl
        call edi
        mov ecx, dword ptr ss : [esp+0x1C]
        push ecx
        mov dword ptr ss : [esp+0xA4], 0xFFFFFFFF
        call public_6fa8fe0
        add esp, 4
        mov dword ptr ss : [esp+0x1C], esi
        mov dword ptr ss : [esp+0x20], esi
        mov dword ptr ss : [esp+0x24], esi
        public_6eb464a : nop
        mov ecx, dword ptr ss : [esp+0xA8]
        call dword ptr ds : [public_6fb3024]
        test al, al
        jne public_6eb4500
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6eb4663 : nop
        mov ecx, dword ptr ss : [esp+0x88]
        mov dword ptr fs : [0], ecx
        add esp, 0x94
        ret 
        UNREACHABLE_TRAP(0x6eb44c0)
    }
}

#undef public_6eb4500
#undef public_6eb464a
#undef public_6eb4663
