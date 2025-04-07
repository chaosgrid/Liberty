#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_421dd0);

#define public_421df9 _public_421df9
#define public_421e0e _public_421e0e
#define public_421e43 _public_421e43
#define public_421e4d _public_421e4d
#define public_421e73 _public_421e73
#define public_421e81 _public_421e81
#define public_421ea6 _public_421ea6
#define public_421eae _public_421eae

PROC_DECLARE(0x421dd0, internal_421dd0, public_421dd0);
extern "C" NAKED register_t __cdecl internal_421dd0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        cmp eax, 0xB71
        ja public_421e73
        je public_421e0e
        sub eax, 0xB44
        je public_421df9
        sub eax, 0xC
        jne public_421e81
        mov byte ptr ds : [public_6648d8], 1
        ret 
        public_421df9 : nop
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push 2
        push 0x16
        push eax
        call dword ptr ds : [ecx+0xF0]
        ret 
        public_421e0e : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov byte ptr ds : [public_6648c4], 1
        mov eax, dword ptr ds : [edx]
        mov edx, dword ptr ds : [public_6648cc]
        mov ecx, dword ptr ds : [eax]
        push edx
        push 0x17
        push eax
        call dword ptr ds : [ecx+0xF0]
        mov al, byte ptr ds : [public_6648c4]
        test al, al
        je public_421e43
        mov eax, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [eax]
        push 1
        jmp public_421e4d
        public_421e43 : nop
        mov edx, dword ptr ds : [public_5c6de0]
        mov eax, dword ptr ds : [edx]
        push 0
        public_421e4d : nop
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
        public_421e73 : nop
        cmp eax, 0xBE2
        je public_421eae
        cmp eax, 0xDE1
        je public_421ea6
/*FIXUP public_421e81 : nop
        push offset public_5c97c8 @0x421e81*/
  FIXUP public_421e81 : nop
        push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c97c8
        push 0x287
/*FIXUP push offset public_5c9768 @0x421e8b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9768
        mov eax, 0x100002
/*FIXUP push offset public_5c9794 @0x421e95*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c9794
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        call dword ptr ds : [eax]
        add esp, 0x14
        ret 
        public_421ea6 : nop
        mov byte ptr ds : [public_6648d0], 1
        ret 
        public_421eae : nop
        mov ecx, dword ptr ds : [public_5c6de0]
        push 1
        mov dword ptr ds : [public_6648b8], 1
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0x1B
        push eax
        call dword ptr ds : [edx+0xF0]
        ret 
        UNREACHABLE_TRAP(0x421dd0)
    }
}

#undef public_421df9
#undef public_421e0e
#undef public_421e43
#undef public_421e4d
#undef public_421e73
#undef public_421e81
#undef public_421ea6
#undef public_421eae
