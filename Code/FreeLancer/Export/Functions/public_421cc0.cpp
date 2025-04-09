#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421cc0);
CLANG_FORWARD_PROC_SYMBOL(public_421dc0);
CLANG_FORWARD_PROC_SYMBOL(public_42d660);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

#define public_421d35 _public_421d35
#define public_421d6c _public_421d6c
#define public_421dae _public_421dae

PROC_DECLARE(0x421cc0, internal_421cc0, public_421cc0);
extern "C" NAKED register_t __cdecl internal_421cc0()
{
    __asm
    {
        mov ecx, dword ptr ds : [public_6168b4]
        cmp ecx, dword ptr ds : [public_6168b0]
        jae public_421d35
        mov eax, dword ptr ds : [public_6168a8]
        cmp eax, dword ptr ds : [public_6168a4]
        jae public_421d35
        mov edx, dword ptr ss : [esp+8]
        mov word ptr ds : [ecx*2+public_65e8b8], ax
        mov eax, dword ptr ds : [public_6168b4]
        mov ecx, dword ptr ds : [public_6168a8]
        inc eax
        mov dword ptr ds : [public_6168b4], eax
        lea eax, ds:[ecx+ecx*2]
        inc ecx
        mov dword ptr ds : [public_6168a8], ecx
        mov ecx, dword ptr ss : [esp+4]
        lea eax, ds : [eax*8+public_6168b8]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov edx, dword ptr ds : [public_616898]
        mov dword ptr ds : [eax+0xC], edx
        mov ecx, dword ptr ds : [public_61689c]
        mov dword ptr ds : [eax+0x10], ecx
        mov edx, dword ptr ds : [public_6168a0]
        mov dword ptr ds : [eax+0x14], edx
        ret 
        public_421d35 : nop
        mov cl, byte ptr ds : [public_616880]
        mov al, 1
        test al, cl
        jne public_421d6c
        mov dl, cl
        or dl, al
/*FIXUP push offset _public_421dc0 @0x421d45*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset _public_421dc0
        mov byte ptr ds : [public_616880], dl
        mov dword ptr ds : [public_616878], 0
        mov dword ptr ds : [public_61687c], 0x3F800000
        call public_5b7e6c
        add esp, 4
        public_421d6c : nop
        call public_42d660
        fld dword ptr ds : [public_616878]
        fsubr st, st(1)
        fcomp dword ptr ds : [public_61687c]
        fnstsw ax
        test ah, 0x41
        jne public_421dae
/*FIXUP push offset public_5c97b4 @0x421d86*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c97b4
        fstp dword ptr ds : [public_616878]
        push 0x59
/*FIXUP push offset public_5c9768 @0x421d93*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9768
        mov eax, 0x100002
/*FIXUP push offset public_5c9794 @0x421d9d*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9794
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 
        public_421dae : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x421cc0)
    }
}

#undef public_421d35
#undef public_421d6c
#undef public_421dae
