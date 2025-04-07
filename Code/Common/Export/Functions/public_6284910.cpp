#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6281510);
CLANG_FORWARD_PROC_SYMBOL(public_6284690);
CLANG_FORWARD_PROC_SYMBOL(public_62847e0);
CLANG_FORWARD_PROC_SYMBOL(public_6284910);
CLANG_FORWARD_PROC_SYMBOL(public_6284a90);
CLANG_FORWARD_PROC_SYMBOL(public_6284ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);
CLANG_FORWARD_JUMP_SYMBOL(public_6392f58);

#define public_6284998 _public_6284998
#define public_62849c7 _public_62849c7
#define public_62849d2 _public_62849d2
#define public_62849f0 _public_62849f0
#define public_6284a00 _public_6284a00
#define public_6284a1a _public_6284a1a
#define public_6284a29 _public_6284a29
#define public_6284a48 _public_6284a48
#define public_6284a5d _public_6284a5d
#define public_6284a74 _public_6284a74

PROC_DECLARE(0x6284910, internal_6284910, public_6284910);
extern "C" NAKED register_t __cdecl internal_6284910()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6392f58 @0x6284918*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6392f58
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        mov ebx, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ds : [ebx+0x74]
        cmp eax, 2
        push esi
        jne public_6284a48
        mov al, byte ptr ss : [esp+0x28]
        push ebp
        push edi
        xor edi, edi
        mov byte ptr ss : [esp+0x10], al
        mov dword ptr ss : [esp+0x14], edi
        mov dword ptr ss : [esp+0x18], edi
        mov dword ptr ss : [esp+0x1C], edi
        mov edx, dword ptr ds : [ebx+4]
        lea ecx, ss:[esp+0x10]
        push ecx
        push ebx
        push edx
        mov dword ptr ss : [esp+0x34], edi
        call public_6284690
        mov eax, dword ptr ss : [esp+0x40]
        push eax
        push ebx
        call public_62847e0
        mov ebp, dword ptr ds : [ebx+4]
        add esp, 0x14
        cmp ebp, 0xFFFFFFFF
        je public_62849f0
        mov ecx, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [eax]
        push 0xFFFFFFFF
        push 1
        push ebp
        push eax
        call dword ptr ds : [edx+0xD8]
        mov esi, eax
        cmp esi, 0xFFFFFFFF
        je public_62849f0
        public_6284998 : nop
        mov eax, dword ptr ds : [public_6399040]
        mov eax, dword ptr ds : [eax]
        mov ecx, dword ptr ds : [eax]
        push esi
        push eax
        call dword ptr ds : [ecx+0x80]
        mov edi, eax
        test edi, edi
        je public_62849c7
        cmp edi, ebx
        je public_62849c7
        push edi
        push ebx
        call public_6284a90
        push edi
        push ebx
        push esi
        call public_6284ae0
        add esp, 0x14
        jmp public_62849d2
        public_62849c7 : nop
        push ebx
        push ebx
        push esi
        call public_6284ae0
        add esp, 0xC
        public_62849d2 : nop
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
        jne public_6284998
        xor edi, edi
        public_62849f0 : nop
        mov esi, dword ptr ss : [esp+0x14]
        cmp esi, dword ptr ss : [esp+0x18]
        je public_6284a29
        lea ebx, ds:[ebx]
        public_6284a00 : nop
        mov eax, dword ptr ds : [esi]
        cmp dword ptr ds : [eax+0x54], edi
        je public_6284a1a
        mov ecx, dword ptr ds : [eax+0x84]
        xor edx, edx
        mov dl, byte ptr ds : [esi+4]
        push 1
        push edx
        call public_6281510
        public_6284a1a : nop
        mov eax, dword ptr ss : [esp+0x18]
        add esi, 8
        cmp esi, eax
        jne public_6284a00
        mov esi, dword ptr ss : [esp+0x14]
        public_6284a29 : nop
        push esi
        call public_6391d5a
        add esp, 4
        mov dword ptr ds : [ebx+0x74], edi
        pop edi
        pop ebp
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6284a48 : nop
        cmp eax, 1
        jne public_6284a74
        mov ecx, dword ptr ds : [ebx+0x60]
        xor esi, esi
        cmp ecx, esi
        je public_6284a5d
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        public_6284a5d : nop
        mov dword ptr ds : [ebx+0x60], esi
        mov dword ptr ds : [ebx+0x74], esi
        pop esi
        pop ebx
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        public_6284a74 : nop
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ebx+0x74], 0
        pop esi
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6284910)
    }
}

#undef public_6284998
#undef public_62849c7
#undef public_62849d2
#undef public_62849f0
#undef public_6284a00
#undef public_6284a1a
#undef public_6284a29
#undef public_6284a48
#undef public_6284a5d
#undef public_6284a74
