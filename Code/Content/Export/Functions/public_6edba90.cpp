#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6740);
CLANG_FORWARD_PROC_SYMBOL(public_6edba90);
CLANG_FORWARD_PROC_SYMBOL(public_6eeaf10);
CLANG_FORWARD_PROC_SYMBOL(public_6f937c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e30);
CLANG_FORWARD_PROC_SYMBOL(public_6fa6e50);
CLANG_FORWARD_PROC_SYMBOL(public_6fa8fe0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);
CLANG_FORWARD_JUMP_SYMBOL(public_6fab44b);

#define public_6edbb66 _public_6edbb66
#define public_6edbb84 _public_6edbb84
#define public_6edbb9c _public_6edbb9c
#define public_6edbbc2 _public_6edbbc2
#define public_6edbbe2 _public_6edbbe2
#define public_6edbc52 _public_6edbc52
#define public_6edbc55 _public_6edbc55

PROC_DECLARE(0x6edba90, internal_6edba90, public_6edba90);
extern "C" NAKED register_t __cdecl internal_6edba90()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6fab44b @0x6edba92*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6fab44b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0xDC
        mov eax, dword ptr ss : [esp+0xF0]
        mov edx, dword ptr ss : [esp+0xEC]
        push ebx
        mov ebx, ecx
        mov cl, byte ptr ss : [esp+0xB]
        push ebp
        push esi
        xor esi, esi
        lea ebp, ds:[ebx+0x14]
        push edi
        mov dword ptr ds : [ebx+4], eax
        mov dword ptr ds : [ebx+8], esi
        mov dword ptr ds : [ebx+0xC], esi
        mov dword ptr ds : [ebx+0x10], esi
        lea edi, ds:[ebx+0xC]
        mov byte ptr ss : [ebp], cl
        mov dword ptr ss : [ebp+4], esi
        mov dword ptr ss : [ebp+8], esi
        mov dword ptr ss : [ebp+0xC], esi
        mov dword ptr ss : [esp+0x1C], ebx
        mov dword ptr ds : [ebx+0x24], edx
        mov dword ptr ds : [ebx+0x28], esi
        mov dword ptr ds : [ebx+0x2C], esi
        lea eax, ss:[esp+0x100]
        push edi
        push eax
        mov dword ptr ss : [esp+0xFC], esi
        mov dword ptr ds : [ebx], offset public_6fb69d8
        call dword ptr ds : [public_6fb3444]
        push edi
        call public_6fa6e50
        add esp, 0xC
        cmp eax, esi
        je public_6edbc52
        push 0x4000
        mov ecx, eax
        call public_6fa6e30
        test al, al
        je public_6edbc52
        call dword ptr ds : [public_6fb3370]
        cdq 
        and edx, 0x7FFF
        add eax, edx
        sar eax, 0xF
        test eax, eax
        jne public_6edbc55
        mov dword ptr ds : [ebx+0x28], 0x4A39
        mov ecx, dword ptr ss : [ebp+4]
        cmp ecx, esi
        je public_6edbb66
        mov eax, dword ptr ss : [ebp+0xC]
        sub eax, ecx
        sar eax, 2
        cmp eax, 1
        jae public_6edbbc2
        public_6edbb66 : nop
        push 4
        call public_6fa912a
        mov esi, dword ptr ss : [ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        mov edi, eax
        mov eax, dword ptr ss : [ebp+8]
        add esp, 4
        cmp esi, eax
        mov dword ptr ss : [esp+0x18], eax
        je public_6edbb9c
        public_6edbb84 : nop
        push esi
        push edi
        call public_6eb6740
        mov eax, dword ptr ss : [esp+0x20]
        add esi, 4
        add esp, 8
        add edi, 4
        cmp esi, eax
        jne public_6edbb84
        public_6edbb9c : nop
        mov ecx, dword ptr ss : [ebp+4]
        push ecx
        call public_6fa8fe0
        mov esi, dword ptr ss : [esp+0x14]
        lea edx, ds:[esi+4]
        add esp, 4
        mov ecx, ebp
        mov dword ptr ss : [ebp+0xC], edx
        call public_6fa3db0
        lea eax, ds:[esi+eax*4]
        mov dword ptr ss : [ebp+8], eax
        mov dword ptr ss : [ebp+4], esi
        public_6edbbc2 : nop
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_6fb69bc
        repne scasb
        not ecx
        dec ecx
        mov eax, ecx
        cmp eax, 0x40
        mov byte ptr ss : [esp+0x24], 0
        jb public_6edbbe2
        mov eax, 0x3F
        public_6edbbe2 : nop
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov esi, offset public_6fb69bc
        lea edi, ss:[esp+0x24]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov byte ptr ss : [esp+eax+0x24], 0
        mov dword ptr ss : [esp+0x20], eax
        mov eax, dword ptr ds : [ebx+0xC]
        push eax
/*FIXUP push offset public_6fb6064 @0x6edbc08*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6fb6064
        lea ecx, ss:[esp+0x2C]
        push ecx
        lea edx, ss:[esp+0xB4]
        push edx
        call public_6eeaf10
        mov esi, eax
        lea eax, ss:[esp+0x78]
        mov ecx, 0x11
        lea edi, ss:[esp+0x74]
        push eax
        rep movsd
        call dword ptr ds : [public_6fb3684]
        mov edx, dword ptr ss : [ebp+8]
        add esp, 0x14
        lea ecx, ss:[esp+0x10]
        push ecx
        push 1
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x1C], eax
        call public_6f937c0
        jmp public_6edbc55
        public_6edbc52 : nop
        mov dword ptr ds : [ebx+0x24], esi
        public_6edbc55 : nop
        mov ecx, dword ptr ss : [esp+0xEC]
        pop edi
        pop esi
        pop ebp
        mov eax, ebx
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0xE8
        ret 0xC
        UNREACHABLE_TRAP(0x6edba90)
    }
}

#undef public_6edbb66
#undef public_6edbb84
#undef public_6edbb9c
#undef public_6edbbc2
#undef public_6edbbe2
#undef public_6edbc52
#undef public_6edbc55
