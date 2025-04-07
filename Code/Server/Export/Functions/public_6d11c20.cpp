#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce57a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d115e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d11c20);
CLANG_FORWARD_PROC_SYMBOL(public_6d11ec0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16120);
CLANG_FORWARD_PROC_SYMBOL(public_6d16730);
CLANG_FORWARD_PROC_SYMBOL(public_6d16dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d16e60);
CLANG_FORWARD_PROC_SYMBOL(public_6d17170);
CLANG_FORWARD_PROC_SYMBOL(public_6d171b0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61aed);

#define public_6d11c70 _public_6d11c70
#define public_6d11c82 _public_6d11c82
#define public_6d11c9b _public_6d11c9b
#define public_6d11cc8 _public_6d11cc8
#define public_6d11cda _public_6d11cda
#define public_6d11cf3 _public_6d11cf3
#define public_6d11d50 _public_6d11d50
#define public_6d11d6d _public_6d11d6d
#define public_6d11d86 _public_6d11d86
#define public_6d11dd0 _public_6d11dd0
#define public_6d11ded _public_6d11ded
#define public_6d11e06 _public_6d11e06
#define public_6d11e51 _public_6d11e51
#define public_6d11e6e _public_6d11e6e
#define public_6d11e87 _public_6d11e87

PROC_DECLARE(0x6d11c20, internal_6d11c20, public_6d11c20);
extern "C" NAKED register_t __cdecl internal_6d11c20()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6d61aed @0x6d11c22*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61aed
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x1C], ebp
        lea esi, ss:[ebp+0xC]
        mov dword ptr ss : [esp+0x18], esi
        push 1
        lea eax, ss:[esp+0x14]
        add esi, 4
        xor ebx, ebx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 3
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d16120
        test al, al
        je public_6d11c9b
        lea esp, ss:[esp]
        public_6d11c70 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [ecx+8]
        cmp ecx, ebx
        je public_6d11c82
        push 1
        call public_6d16dc0
        public_6d11c82 : nop
        mov edx, dword ptr ss : [esp+0x10]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ds : [edx+8], ebx
        call public_6d16120
        test al, al
        jne public_6d11c70
        public_6d11c9b : nop
        mov ecx, esi
        call public_6d17170
        mov ecx, dword ptr ss : [esp+0x18]
        lea esi, ss:[ebp+0x24]
        mov dword ptr ss : [esp+0x14], esi
        push 1
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], ebx
        add esi, 4
        push edx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d16120
        test al, al
        je public_6d11cf3
        public_6d11cc8 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [eax+8]
        cmp ecx, ebx
        je public_6d11cda
        push 1
        call public_6d16e60
        public_6d11cda : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx+8], ebx
        push edx
        mov ecx, esi
        call public_6d16120
        test al, al
        jne public_6d11cc8
        public_6d11cf3 : nop
        mov ecx, esi
        call public_6d17170
        mov eax, dword ptr ss : [esp+0x14]
        lea esi, ss:[ebp+0x3C]
        mov ecx, esi
        mov dword ptr ds : [eax], ebx
        call public_6d16730
        lea edi, ss:[ebp+0x54]
        mov ecx, edi
        call public_6ce57a0
        mov ecx, ebp
        call public_6d11ec0
        mov ecx, edi
        mov byte ptr ss : [esp+0x2C], 2
        call public_6d115e0
        mov ebp, esi
        mov dword ptr ss : [esp+0x20], ebp
        push 1
        lea ecx, ss:[esp+0x14]
        lea esi, ss:[ebp+4]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 4
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d16120
        test al, al
        je public_6d11d86
        nop 
        lea esp, ss:[esp]
        public_6d11d50 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [edx+8]
        cmp edi, ebx
        je public_6d11d6d
        lea ecx, ds:[edi+0xC]
        call dword ptr ds : [public_6d6474c]
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6d11d6d : nop
        mov eax, dword ptr ss : [esp+0x10]
        push 1
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        mov dword ptr ds : [eax+8], ebx
        call public_6d16120
        test al, al
        jne public_6d11d50
        public_6d11d86 : nop
        mov ecx, esi
        call public_6d17170
        mov dword ptr ss : [ebp], ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], 1
        mov dword ptr ds : [esi], offset public_6d68338
        call public_6d17170
        mov ecx, esi
        call public_6d171b0
        mov ebp, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x20], ebp
        push 1
        lea edx, ss:[esp+0x14]
        lea esi, ss:[ebp+4]
        push edx
        mov ecx, esi
        mov byte ptr ss : [esp+0x34], 5
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d16120
        test al, al
        je public_6d11e06
        nop 
        public_6d11dd0 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebx
        je public_6d11ded
        lea ecx, ds:[edi+0xC]
        call dword ptr ds : [public_6d64748]
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6d11ded : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push 1
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx+8], ebx
        push edx
        mov ecx, esi
        call public_6d16120
        test al, al
        jne public_6d11dd0
        public_6d11e06 : nop
        mov ecx, esi
        call public_6d17170
        mov dword ptr ss : [ebp], ebx
        mov ecx, esi
        mov byte ptr ss : [esp+0x2C], bl
        mov dword ptr ds : [esi], offset public_6d68340
        call public_6d17170
        mov ecx, esi
        call public_6d171b0
        mov ebp, dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x20], ebp
        push 1
        lea eax, ss:[esp+0x14]
        lea esi, ss:[ebp+4]
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x34], 6
        mov dword ptr ss : [esp+0x18], ebx
        call public_6d16120
        test al, al
        je public_6d11e87
        public_6d11e51 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edi, dword ptr ds : [ecx+8]
        cmp edi, ebx
        je public_6d11e6e
        lea ecx, ds:[edi+0xC]
        call dword ptr ds : [public_6d64744]
        push edi
        call public_6d5ffb0
        add esp, 4
        public_6d11e6e : nop
        mov edx, dword ptr ss : [esp+0x10]
        push 1
        lea eax, ss:[esp+0x14]
        push eax
        mov ecx, esi
        mov dword ptr ds : [edx+8], ebx
        call public_6d16120
        test al, al
        jne public_6d11e51
        public_6d11e87 : nop
        mov ecx, esi
        call public_6d17170
        mov dword ptr ss : [ebp], ebx
        mov ecx, esi
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov dword ptr ds : [esi], offset public_6d68348
        call public_6d17170
        mov ecx, esi
        call public_6d171b0
        mov ecx, dword ptr ss : [esp+0x24]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x20
        ret 
        UNREACHABLE_TRAP(0x6d11c20)
    }
}

#undef public_6d11c70
#undef public_6d11c82
#undef public_6d11c9b
#undef public_6d11cc8
#undef public_6d11cda
#undef public_6d11cf3
#undef public_6d11d50
#undef public_6d11d6d
#undef public_6d11d86
#undef public_6d11dd0
#undef public_6d11ded
#undef public_6d11e06
#undef public_6d11e51
#undef public_6d11e6e
#undef public_6d11e87
