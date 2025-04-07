#include "LuaProfile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_68023d0);
CLANG_FORWARD_PROC_SYMBOL(public_6803c40);
CLANG_FORWARD_PROC_SYMBOL(public_6805590);
CLANG_FORWARD_PROC_SYMBOL(public_68055c0);
CLANG_FORWARD_PROC_SYMBOL(public_6805eb0);
CLANG_FORWARD_PROC_SYMBOL(public_6809be0);
CLANG_FORWARD_PROC_SYMBOL(public_6809c70);
CLANG_FORWARD_PROC_SYMBOL(public_680bdaa);

#define public_680a332 _public_680a332
#define public_680a34b _public_680a34b
#define public_680a364 _public_680a364

PROC_DECLARE(0x680a2e0, internal_680a2e0, public_680a2e0);
extern "C" NAKED register_t __cdecl internal_680a2e0()
{
    __asm
    {
        push ecx
        push ebx
        push esi
        push edi
        push 1
        call public_6809c70
        mov edi, eax
        push edi
        call public_6809be0
        call public_680bdaa
        mov ebx, eax
        mov dword ptr ss : [esp+0x14], ebx
        fild dword ptr ss : [esp+0x14]
        fstp qword ptr ss : [esp]
        push 2
        call public_6805eb0
        add esp, 0xC
        call public_680bdaa
        test ebx, ebx
        mov esi, eax
        jle public_680a364
        push esi
        push edi
        call public_68055c0
        push eax
        call public_68023d0
        add esp, 0xC
        cmp esi, ebx
        jge public_680a34b
        push ebp
        lea ebp, ds:[esi+1]
        public_680a332 : nop
        push ebp
        push edi
        call public_68055c0
        push eax
        push esi
        push edi
        call public_6805590
        add esp, 0x14
        inc esi
        inc ebp
        cmp esi, ebx
        jl public_680a332
        pop ebp
        public_680a34b : nop
        lea eax, ds:[ebx-1]
        push eax
        push edi
        call public_6803c40
/*FIXUP push offset public_680d968 @0x680a355*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_680d968
        push ebx
        push edi
        call public_6805590
        add esp, 0x14
        public_680a364 : nop
        pop edi
        pop esi
        pop ebx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x680a2e0)
    }
}

#undef public_680a332
#undef public_680a34b
#undef public_680a364
