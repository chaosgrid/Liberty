#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_518f20);
CLANG_FORWARD_PROC_SYMBOL(public_51d070);

#define public_518ee0 _public_518ee0
#define public_518f05 _public_518f05

PROC_DECLARE(0x518e40, internal_518e40, public_518e40);
extern "C" NAKED register_t __cdecl internal_518e40()
{
    __asm
    {
        sub esp, 0x30
        push ebx
        mov ebx, ecx
        mov al, byte ptr ds : [ebx+0x214]
        test al, al
        push ebp
        mov ebp, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x28], 0x3F800000
        mov dword ptr ss : [esp+0x18], 0x3F800000
        mov dword ptr ss : [esp+8], 0x3F800000
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x20], 0
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x2C], 0
        jne public_518f05
        push 0
        push ebp
        lea eax, ss:[esp+0x10]
        push eax
        call public_518f20
        test al, al
        je public_518ee0
        push esi
        push edi
        lea edi, ds:[ebx+4]
        mov ecx, 0xC
        lea esi, ss:[esp+0x10]
        rep movsd
        pop edi
        mov byte ptr ds : [ebx+0x34], 1
        pop esi
        jmp public_518f05
        mov edi, edi
        public_518ee0 : nop
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5dbc48 @0x518ee6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbc48
        push 0x3E9
/*FIXUP push offset public_5dbacc @0x518ef0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5dbacc
        mov eax, 0x100002
/*FIXUP push offset public_5c8bd4 @0x518efa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8bd4
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_518f05 : nop
        push ebp
        mov ecx, ebx
        call public_51d070
        pop ebp
        mov byte ptr ds : [ebx+0x214], 0
        pop ebx
        add esp, 0x30
        ret 4
        UNREACHABLE_TRAP(0x518e40)
    }
}

#undef public_518ee0
#undef public_518f05
