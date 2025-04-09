#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421ed0);

#define public_421f98 _public_421f98
#define public_421fa0 _public_421fa0
#define public_421fb6 _public_421fb6
#define public_421feb _public_421feb
#define public_421ff5 _public_421ff5
#define public_42201b _public_42201b
#define public_422030 _public_422030
#define public_422055 _public_422055
#define public_422072 _public_422072

PROC_DECLARE(0x421ed0, internal_421ed0, public_421ed0);
extern "C" NAKED register_t __cdecl internal_421ed0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xB71
        ja public_42201b
        je public_421fb6
        sub eax, 0xB44
        je public_421fa0
        sub eax, 0xC
        je public_421f98
        sub eax, 0x10
        jne public_422030
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x1C
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x23
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x8C
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x22
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x24
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x25
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0
        push 0x26
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        public_421f98 : nop
        mov byte ptr ds : [public_6648d8], 0
        ret 
        public_421fa0 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 1
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        public_421fb6 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov byte ptr ds : [public_6648c4], 0
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6648cc]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ds : [public_6648c4]
        test al, al
        je public_421feb
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push 1
        jmp public_421ff5
        public_421feb : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        push 0
        public_421ff5 : nop
        mov ecx, dword ptr ds : [eax]
        push 7
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6648c8]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0xE
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        public_42201b : nop
        cmp eax, 0xBE2
        je public_422072
        cmp eax, 0xDE1
        je public_422055
        lea esp, ss:[esp]
/*FIXUP public_422030 : nop
        push offset public_5c97dc @0x422030*/
  FIXUP public_422030 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c97dc
        push 0x2BF
/*FIXUP push offset public_5c9768 @0x42203a*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9768
        mov eax, 0x100002
/*FIXUP push offset public_5c9794 @0x422044*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9794
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 
        public_422055 : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        push 0
        mov byte ptr ds : [public_6648d0], 0
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [edx+0x108]
        ret 
        public_422072 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        push 0
        mov dword ptr ds : [public_6648b8], 0
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 0x1B
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x421ed0)
    }
}

#undef public_421f98
#undef public_421fa0
#undef public_421fb6
#undef public_421feb
#undef public_421ff5
#undef public_42201b
#undef public_422030
#undef public_422055
#undef public_422072
