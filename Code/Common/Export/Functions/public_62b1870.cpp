#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a0030);
CLANG_FORWARD_PROC_SYMBOL(public_62b1870);
CLANG_FORWARD_PROC_SYMBOL(public_62c2300);
CLANG_FORWARD_PROC_SYMBOL(public_62d4ba0);

#define public_62b18b5 _public_62b18b5
#define public_62b1945 _public_62b1945
#define public_62b1957 _public_62b1957

PROC_DECLARE(0x62b1870, internal_62b1870, public_62b1870);
extern "C" NAKED register_t __cdecl internal_62b1870()
{
    __asm
    {
        sub esp, 0x20
        push ebx
        push ebp
        push edi
        mov edi, ecx
/*FIXUP push offset public_639f3d4 @0x62b1878*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639f3d4
        lea ecx, ds:[edi+0x2B0]
        call public_62a0030
        xor ebx, ebx
        cmp eax, ebx
        je public_62b1957
        lea ecx, ds:[eax-0x10]
        cmp ecx, ebx
        je public_62b1957
        call public_62c2300
        mov ebp, dword ptr ds : [edi+0x1F8]
        cmp ebp, dword ptr ds : [edi+0x1FC]
        je public_62b1957
        push esi
        public_62b18b5 : nop
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebx
        je public_62b1945
        add eax, 0xFFFFFFF8
        cmp eax, ebx
        je public_62b1945
        push eax
        call public_62d4ba0
        mov esi, eax
        add esp, 4
        cmp esi, ebx
        je public_62b1945
        mov eax, dword ptr ds : [edi+0xB0]
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639e5f8 @0x62b18e6*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e5f8
        push 0x3C5
/*FIXUP push offset public_639e5d0 @0x62b18f0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639e5d0
        mov dword ptr ss : [esp+0x30], eax
        mov eax, 0x100002
/*FIXUP push offset public_639add0 @0x62b18fe*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639add0
        push eax
        mov byte ptr ss : [esp+0x2E], bl
        mov dword ptr ss : [esp+0x30], 0
        mov dword ptr ss : [esp+0x34], ebx
        mov dword ptr ss : [esp+0x3C], ebx
        mov dword ptr ss : [esp+0x40], ebx
        mov byte ptr ss : [esp+0x2D], 1
        mov byte ptr ss : [esp+0x2C], bl
        call dword ptr ds : [ecx]
        mov eax, dword ptr ds : [esi]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        lea edx, ss:[esp+0x18]
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x14], 4
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [eax]
        public_62b1945 : nop
        mov eax, dword ptr ds : [edi+0x1FC]
        add ebp, 8
        cmp ebp, eax
        jne public_62b18b5
        pop esi
        public_62b1957 : nop
        pop edi
        pop ebp
        pop ebx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x62b1870)
    }
}

#undef public_62b18b5
#undef public_62b1945
#undef public_62b1957
