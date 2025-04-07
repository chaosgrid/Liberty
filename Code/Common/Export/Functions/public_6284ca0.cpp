#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_6284690);
CLANG_FORWARD_PROC_SYMBOL(public_6284a90);
CLANG_FORWARD_PROC_SYMBOL(public_6284ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6284ca0);
CLANG_FORWARD_PROC_SYMBOL(public_6343700);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392f58);

#define public_6284d2f _public_6284d2f
#define public_6284d58 _public_6284d58
#define public_6284d90 _public_6284d90
#define public_6284d9f _public_6284d9f
#define public_6284dbd _public_6284dbd
#define public_6284dc7 _public_6284dc7
#define public_6284de1 _public_6284de1
#define public_6284df0 _public_6284df0

PROC_DECLARE(0x6284ca0, internal_6284ca0, public_6284ca0);
extern "C" NAKED register_t __cdecl internal_6284ca0()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6392f58 @0x6284ca2*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392f58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        mov al, byte ptr ss : [esp+0x20]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov ebx, dword ptr ss : [esp+0x34]
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        push edx
        mov dword ptr ss : [esp+0x34], edi
        call public_6284690
        mov esi, dword ptr ss : [esp+0x3C]
        mov eax, dword ptr ds : [esi+0x54]
        add esp, 0xC
        cmp eax, edi
        je public_6284d2f
        mov ecx, dword ptr ds : [ebx+0x54]
        cmp ecx, edi
        je public_6284d2f
        push 8
        add eax, 0x84
        push eax
        add ecx, 0x84
        push ecx
        call dword ptr ds : [public_63992e0]
        mov eax, dword ptr ds : [ebx+0x54]
        mov ecx, dword ptr ds : [esi+0x54]
        push 0xBF800000
        push eax
        push ecx
        call public_6343700
        add esp, 0x18
        mov dword ptr ds : [ebx+0x74], 2
        public_6284d2f : nop
        mov ebp, dword ptr ds : [ebx+4]
        cmp ebp, 0xFFFFFFFF
        je public_6284dbd
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_6284dbd
        public_6284d58 : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov edi, eax
        test edi, edi
        je public_6284d90
        cmp edi, ebx
        je public_6284d90
        mov edx, dword ptr ss : [esp+0x30]
        push edi
        push edx
        call public_6284a90
        mov eax, dword ptr ss : [esp+0x38]
        push edi
        push eax
        push esi
        call public_6284ae0
        add esp, 0x14
        jmp public_6284d9f
        public_6284d90 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        push ebx
        push ecx
        push esi
        call public_6284ae0
        add esp, 0xC
        public_6284d9f : nop
        mov edx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [eax]
        push esi
        push 1
        push ebp
        push eax
        call dword ptr ds : [ecx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        jne public_6284d58
        xor edi, edi
        public_6284dbd : nop
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, dword ptr ss : [esp+0x18]
        je public_6284df0
        public_6284dc7 : nop
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax+0x54], edi
        je public_6284de1
        mov ecx, dword ptr ds : [eax+0x84]
        xor edx, edx
        mov dl, byte ptr ds : [esi+4]
        push 1
        push edx
        call public_6281510
        public_6284de1 : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 8
        cmp esi, eax
        jne public_6284dc7
        mov esi, dword ptr ss : [esp+0x14]
        public_6284df0 : nop
        push esi
        call public_6391d5a
        mov ecx, dword ptr ss : [esp+0x24]
        add esp, 4
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6284ca0)
    }
}

#undef public_6284d2f
#undef public_6284d58
#undef public_6284d90
#undef public_6284d9f
#undef public_6284dbd
#undef public_6284dc7
#undef public_6284de1
#undef public_6284df0
