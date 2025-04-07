#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f511c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52920);
CLANG_FORWARD_PROC_SYMBOL(public_6f52dd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f52f60);
CLANG_FORWARD_PROC_SYMBOL(public_6f52fc0);
CLANG_FORWARD_PROC_SYMBOL(public_6f53130);
CLANG_FORWARD_PROC_SYMBOL(public_6f53790);
CLANG_FORWARD_PROC_SYMBOL(public_6f54040);
CLANG_FORWARD_PROC_SYMBOL(public_6f54590);
CLANG_FORWARD_PROC_SYMBOL(public_6f54820);
CLANG_FORWARD_PROC_SYMBOL(public_6f54900);

#define public_6f54880 _public_6f54880
#define public_6f54896 _public_6f54896
#define public_6f548b8 _public_6f548b8
#define public_6f548e1 _public_6f548e1

PROC_DECLARE(0x6f54820, internal_6f54820, public_6f54820);
extern "C" NAKED register_t __cdecl internal_6f54820()
{
    __asm
    {
        sub esp, 8
        push ebx
        mov ebx, dword ptr ss : [esp+0x18]
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
/*FIXUP push offset public_6f61404 @0x6f5482f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61404
        push 0x64
        push ebx
        push esi
        xor edi, edi
        call public_6f53790
        mov ebp, dword ptr ss : [esp+0x30]
        push ebp
        push esi
        call public_6f54900
        mov eax, dword ptr ds : [esi+4]
        add esp, 0x18
        cmp eax, 0x2C
        jne public_6f54896
        push esi
        call public_6f52920
        lea eax, ss:[esp+0x14]
        push eax
        push esi
        call public_6f54040
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 0xC
        cmp eax, 4
        jne public_6f54880
/*FIXUP push offset public_6f61230 @0x6f54872*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6f61230
        push esi
        call public_6f511c0
        add esp, 8
        public_6f54880 : nop
        lea ecx, ds:[ebx+1]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        push esi
        call public_6f54820
        add esp, 0xC
        mov edi, eax
        jmp public_6f548b8
        public_6f54896 : nop
        push 0x3D
        push esi
        call public_6f53130
        lea eax, ss:[esp+0x18]
        push eax
        push esi
        call public_6f54590
        lea ecx, ss:[esp+0x20]
        push ecx
        push ebx
        push esi
        call public_6f52f60
        add esp, 0x1C
        public_6f548b8 : nop
        cmp dword ptr ss : [ebp], 3
        jne public_6f548e1
        lea eax, ds:[edi+ebx-1]
        test eax, eax
        je public_6f548e1
        push 0xFFFFFFFF
        push eax
        push 0x1B
        push esi
        call public_6f52dd0
        add esp, 0x10
        add edi, 2
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        public_6f548e1 : nop
        push ebp
        push esi
        call public_6f52fc0
        add esp, 8
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 8
        ret 
        UNREACHABLE_TRAP(0x6f54820)
    }
}

#undef public_6f54880
#undef public_6f54896
#undef public_6f548b8
#undef public_6f548e1
