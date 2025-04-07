#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d19180);
CLANG_FORWARD_PROC_SYMBOL(public_6d191a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d19f20);
CLANG_FORWARD_PROC_SYMBOL(public_6d4a1e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d4eda0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b320);
CLANG_FORWARD_PROC_SYMBOL(public_6d5b610);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bb90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5bbf0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);
CLANG_FORWARD_JUMP_SYMBOL(public_6d61fbb);

#define public_6d19fc5 _public_6d19fc5
#define public_6d19ff2 _public_6d19ff2
#define public_6d19ff4 _public_6d19ff4
#define public_6d1a008 _public_6d1a008
#define public_6d1a00a _public_6d1a00a
#define public_6d1a036 _public_6d1a036
#define public_6d1a065 _public_6d1a065
#define public_6d1a087 _public_6d1a087
#define public_6d1a0a6 _public_6d1a0a6
#define public_6d1a13e _public_6d1a13e
#define public_6d1a174 _public_6d1a174
#define public_6d1a17f _public_6d1a17f

PROC_DECLARE(0x6d19f20, internal_6d19f20, public_6d19f20);
extern "C" NAKED register_t __cdecl internal_6d19f20()
{
    __asm
    {
        mov eax, dword ptr fs : [0]
        push 0xFFFFFFFF
/*FIXUP push public_6d61fbb @0x6d19f28*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6d61fbb
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        push eax
        mov edx, dword ptr ds : [public_6d90260]
        mov dword ptr fs : [0], esp
        sub esp, 0x10
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x30]
        mov eax, edi
        imul eax, 0x418
        lea ebx, ds:[eax+edx-0x418]
        mov eax, dword ptr ss : [esp+0x34]
        test eax, eax
        jbe public_6d1a17f
        mov esi, dword ptr ds : [public_6d90264]
        lea ecx, ds:[eax-1]
        cmp ecx, esi
        jae public_6d1a17f
        imul ecx, 0x418
        mov esi, dword ptr ds : [ecx+edx+0x348]
        test esi, esi
        je public_6d1a17f
        imul eax, 0x418
        lea esi, ds:[eax+edx-0x418]
        mov ecx, esi
        call public_6d4a1e0
        test al, al
        je public_6d1a17f
        mov ebp, dword ptr ss : [esp+0x38]
        test ebp, ebp
        je public_6d19fc5
        mov ecx, esi
        call public_6d4eda0
        push eax
        push ebp
        call dword ptr ds : [public_6d64c9c]
        add esp, 8
        test eax, eax
        jne public_6d1a17f
        public_6d19fc5 : nop
        mov eax, dword ptr ds : [ebx+0x404]
        test eax, eax
        jne public_6d1a008
        push 0x30
        call public_6d60012
        add esp, 4
        mov dword ptr ss : [esp+0x30], eax
        test eax, eax
        mov dword ptr ss : [esp+0x28], 0
        je public_6d19ff2
        mov ecx, eax
        call public_6d5b320
        jmp public_6d19ff4
        public_6d19ff2 : nop
        xor eax, eax
        public_6d19ff4 : nop
        push edi
        mov ecx, eax
        mov dword ptr ss : [esp+0x2C], 0xFFFFFFFF
        mov ebp, eax
        call public_6d5b610
        jmp public_6d1a00a
        public_6d1a008 : nop
        mov ebp, eax
        public_6d1a00a : nop
        mov eax, dword ptr ds : [esi+0x348]
        cmp dword ptr ds : [ebx+0x348], eax
        jne public_6d1a036
        mov ecx, ebx
        call public_6d191a0
        push edi
        lea ecx, ss:[esp+0x34]
        mov si, ax
        call public_6d19180
        mov dword ptr ss : [esp+0x10], 9
        jmp public_6d1a087
        public_6d1a036 : nop
        mov ecx, dword ptr ds : [esi+0x408]
        test ecx, ecx
        je public_6d1a065
        mov ecx, esi
        call public_6d191a0
        mov ecx, ebx
        mov si, ax
        call public_6d191a0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6d19180
        mov dword ptr ss : [esp+0x10], 0xF
        jmp public_6d1a087
        public_6d1a065 : nop
        cmp dword ptr ss : [ebp+0x18], 8
        jb public_6d1a0a6
        mov ecx, ebx
        call public_6d191a0
        push edi
        lea ecx, ss:[esp+0x34]
        mov si, ax
        call public_6d19180
        mov dword ptr ss : [esp+0x10], 0xA
        public_6d1a087 : nop
        xor ecx, ecx
        mov cx, si
        lea eax, ss:[esp+0x10]
        push eax
        mov eax, dword ptr ds : [public_6d8f5dc]
        push 8
        push eax
        mov eax, dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6d1a174
        public_6d1a0a6 : nop
        push eax
        mov ecx, ebp
        call public_6d5bb90
        test al, al
        jne public_6d1a13e
        mov ecx, dword ptr ds : [esi+0x348]
        push ecx
        mov ecx, dword ptr ds : [ebx+0x404]
        call public_6d5bbf0
        mov ecx, esi
        call public_6d191a0
        push edi
        lea ecx, ss:[esp+0x34]
        mov bx, ax
        call public_6d19180
        mov ecx, dword ptr ds : [public_6d8fb18]
        xor edx, edx
        mov dx, bx
        mov dword ptr ss : [esp+0x10], 3
        mov dword ptr ss : [esp+0x14], edx
        mov eax, dword ptr ds : [ecx]
        lea edx, ss:[esp+0x10]
        push edx
        mov edx, dword ptr ds : [public_6d8f5dc]
        push 8
        push edx
        mov edx, dword ptr ss : [esp+0x3C]
        push edx
        call dword ptr ds : [eax]
        mov ecx, esi
        call public_6d191a0
        push eax
        lea ecx, ss:[esp+0x34]
        call public_6d19180
        mov eax, dword ptr ds : [eax]
        xor ecx, ecx
        mov cx, di
        lea esi, ss:[esp+0x10]
        push esi
        mov esi, dword ptr ds : [public_6d8f5dc]
        push 8
        mov dword ptr ss : [esp+0x18], 4
        push esi
        mov dword ptr ss : [esp+0x20], ecx
        jmp public_6d1a174
        public_6d1a13e : nop
        mov ecx, esi
        call public_6d191a0
        push edi
        lea ecx, ss:[esp+0x38]
        mov si, ax
        call public_6d19180
        xor eax, eax
        mov ax, si
        mov dword ptr ss : [esp+0x18], 0xB
        mov dword ptr ss : [esp+0x1C], eax
        lea eax, ss:[esp+0x18]
        push eax
        mov eax, dword ptr ds : [public_6d8f5dc]
        push 8
        push eax
        mov eax, dword ptr ss : [esp+0x40]
        public_6d1a174 : nop
        mov ecx, dword ptr ds : [public_6d8fb18]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        public_6d1a17f : nop
        mov ecx, dword ptr ss : [esp+0x20]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x1C
        ret 
        UNREACHABLE_TRAP(0x6d19f20)
    }
}

#undef public_6d19fc5
#undef public_6d19ff2
#undef public_6d19ff4
#undef public_6d1a008
#undef public_6d1a00a
#undef public_6d1a036
#undef public_6d1a065
#undef public_6d1a087
#undef public_6d1a0a6
#undef public_6d1a13e
#undef public_6d1a174
#undef public_6d1a17f
