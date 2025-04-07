#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401a70);
CLANG_FORWARD_PROC_SYMBOL(public_4021b0);
CLANG_FORWARD_PROC_SYMBOL(public_402270);
CLANG_FORWARD_PROC_SYMBOL(public_402370);
CLANG_FORWARD_PROC_SYMBOL(public_402390);
CLANG_FORWARD_PROC_SYMBOL(public_409800);
CLANG_FORWARD_PROC_SYMBOL(public_418912);
CLANG_FORWARD_PROC_SYMBOL(public_418918);
CLANG_FORWARD_PROC_SYMBOL(public_41898a);
CLANG_FORWARD_PROC_SYMBOL(public_418bfa);
CLANG_FORWARD_PROC_SYMBOL(public_418c00);

#define public_406c8c _public_406c8c
#define public_406d1c _public_406d1c
#define public_406d43 _public_406d43
#define public_406d53 _public_406d53
#define public_406d5f _public_406d5f
#define public_406d69 _public_406d69
#define public_406d72 _public_406d72
#define public_406d80 _public_406d80
#define public_406d91 _public_406d91
#define public_406d9b _public_406d9b
#define public_406e8b _public_406e8b
#define public_406e9d _public_406e9d

PROC_DECLARE(0x406b70, internal_406b70, public_406b70);
extern "C" NAKED register_t __cdecl internal_406b70()
{
    __asm
    {
        sub esp, 0x584
        push ebx
        push ebp
        push esi
        push edi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+0x70]
        push 4
        lea eax, ss:[esp+0x24]
        push eax
        mov dword ptr ss : [esp+0x2C], 3
        call public_418c00
        lea ecx, ss:[esp+0x20]
        push ecx
        call dword ptr ds : [public_41b980]
        mov dword ptr ss : [esp+0x18], eax
        mov eax, dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ds : [eax+0x20]
        push 0x42
        lea edx, ss:[esp+0x54]
        push edx
        push ecx
        call public_409800
        mov eax, dword ptr ds : [esi+0x68]
        mov ecx, dword ptr ds : [eax+0x20]
        push 0x102
        lea edx, ss:[esp+0xA4]
        push edx
        push ecx
        call public_409800
        mov eax, dword ptr ds : [esi+0x6C]
        mov ecx, dword ptr ds : [eax+0x20]
        push 0x22
        lea edx, ss:[esp+0x48]
        push edx
        push ecx
        call public_409800
        mov eax, dword ptr ds : [esi+0x78]
        mov edx, dword ptr ds : [eax+0x20]
        mov edi, dword ptr ds : [public_41bbe8]
        add esp, 0x28
        xor ebx, ebx
        push ebx
        push ebx
        push 0xF0
        push edx
        call edi
        test eax, eax
        setne al
        push ebx
        mov byte ptr ss : [esp+0x1C], al
        mov eax, dword ptr ds : [esi+0x74]
        mov ecx, dword ptr ds : [eax+0x20]
        push ebx
        push 0xF0
        push ecx
        call edi
        test eax, eax
        mov eax, dword ptr ds : [esi+0x7C]
        push ebx
        setne dl
        push ebx
        mov byte ptr ss : [esp+0x1B], dl
        mov eax, dword ptr ds : [eax+0x20]
        push 0xF0
        push eax
        call edi
        test eax, eax
        mov eax, dword ptr ss : [esp+0x14]
        setne cl
        cmp eax, 1
        mov byte ptr ss : [esp+0x1C], cl
        jl public_406e9d
        cmp eax, 0x80
        jg public_406e9d
        mov ebp, dword ptr ds : [public_41b8f4]
        lea edx, ss:[esp+0x4C]
        push edx
        call ebp
        add esp, 4
        test eax, eax
        jne public_406c8c
        push 0xFFFFFFFF
        push ebx
        push 0xF007
        call public_418bfa
        mov eax, dword ptr ds : [esi+0x64]
        mov ecx, dword ptr ds : [eax+0x20]
        mov edx, dword ptr ds : [esi+0x20]
        push 1
        push ecx
        push 0x28
        push edx
        call edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x584
        ret 
        public_406c8c : nop
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ds : [public_427828]
        push eax
        add ecx, 0xCC
        call public_401a70
        mov eax, dword ptr ds : [public_427828]
        lea edx, ss:[esp+0x90]
        push edx
        lea ecx, ds:[eax+0xCC]
        call public_402270
        mov edx, dword ptr ds : [public_427828]
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea ecx, ds:[edx+0xCC]
        call public_4021b0
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [public_427828]
        push eax
        add ecx, 0xCC
        call public_402370
        mov edx, dword ptr ds : [public_427828]
        mov al, byte ptr ss : [esp+0x13]
        mov byte ptr ds : [edx+0x6F4], al
        mov ecx, dword ptr ds : [public_427828]
        lea edx, ss:[esp+0x28]
        push edx
        lea edi, ds:[ecx+0x6E4]
        call ebp
        mov ebp, eax
        add esp, 4
        cmp ebp, 0x7FFFFFFD
        jbe public_406d1c
        call dword ptr ds : [public_41b8a0]
        public_406d1c : nop
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebx
        je public_406d43
        mov cl, byte ptr ds : [eax-1]
        cmp cl, bl
        je public_406d43
        cmp cl, 0xFF
        je public_406d43
        cmp ebp, ebx
        jne public_406d69
        dec cl
        mov byte ptr ds : [eax-1], cl
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], ebx
        mov dword ptr ds : [edi+0xC], ebx
        jmp public_406d9b
        public_406d43 : nop
        cmp ebp, ebx
        jne public_406d53
        push 1
        mov ecx, edi
        call dword ptr ds : [public_41b86c]
        jmp public_406d9b
        public_406d53 : nop
        mov eax, dword ptr ds : [edi+0xC]
        cmp eax, 0x1F
        ja public_406d5f
        cmp eax, ebp
        jae public_406d72
        public_406d5f : nop
        push 1
        mov ecx, edi
        call dword ptr ds : [public_41b86c]
        public_406d69 : nop
        mov ecx, edi
        push ebp
        call dword ptr ds : [public_41b8a4]
        public_406d72 : nop
        cmp ebp, ebx
        mov eax, dword ptr ds : [edi+4]
        lea ecx, ss:[esp+0x28]
        jbe public_406d91
        mov edx, ebp
        nop 
        public_406d80 : nop
        mov bx, word ptr ds : [ecx]
        mov word ptr ds : [eax], bx
        add eax, 2
        add ecx, 2
        dec edx
        jne public_406d80
        xor ebx, ebx
        public_406d91 : nop
        mov eax, dword ptr ds : [edi+4]
        mov dword ptr ds : [edi+8], ebp
        mov word ptr ds : [eax+ebp*2], bx
        public_406d9b : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [public_427828]
        push ecx
        lea ecx, ds:[edx+0xCC]
        call public_402390
        mov ecx, dword ptr ds : [public_41baf8]
        call public_418918
        mov al, byte ptr ds : [public_42621c]
        mov byte ptr ss : [esp+0x194], al
        xor eax, eax
        mov ecx, 0xFF
        lea edi, ss:[esp+0x195]
        rep stosd
        stosw 
/*FIXUP push offset public_42546c @0x406dda*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42546c
        lea ecx, ss:[esp+0x198]
        push ecx
        mov ecx, dword ptr ds : [public_41baf8]
        stosb 
        call public_418912
        lea edx, ss:[esp+0x194]
/*FIXUP push offset public_42547c @0x406dfa*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_42547c
        push edx
        call dword ptr ds : [public_41b978]
        mov edi, eax
        add esp, 8
        cmp edi, ebx
        je public_406e8b
        mov ebx, dword ptr ds : [public_41b97c]
        push edi
        push 1
        lea eax, ss:[esp+0x2C]
        push 4
        push eax
        call ebx
        push edi
        push 1
        lea ecx, ss:[esp+0x64]
        push 0x42
        push ecx
        call ebx
        push edi
        push 1
        lea edx, ss:[esp+0xB8]
        push 0x102
        push edx
        call ebx
        push edi
        push 1
        lea eax, ss:[esp+0x60]
        push 0x22
        push eax
        call ebx
        add esp, 0x40
        push edi
        push 1
        lea ecx, ss:[esp+0x20]
        push 1
        push ecx
        call ebx
        push edi
        push 1
        lea edx, ss:[esp+0x2B]
        push 1
        push edx
        call ebx
        push edi
        push 1
        lea eax, ss:[esp+0x3C]
        push 4
        push eax
        call ebx
        push edi
        push 1
        lea ecx, ss:[esp+0x54]
        push 1
        push ecx
        call ebx
        add esp, 0x40
        push edi
        call dword ptr ds : [public_41b970]
        add esp, 4
        public_406e8b : nop
        mov ecx, esi
        call public_41898a
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x584
        ret 
        public_406e9d : nop
        push 0xFFFFFFFF
        push ebx
        push 0xF006
        call public_418bfa
        mov edx, dword ptr ds : [esi+0x70]
        mov eax, dword ptr ds : [edx+0x20]
        mov ecx, dword ptr ds : [esi+0x20]
        push 1
        push eax
        push 0x28
        push ecx
        call edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x584
        ret 
        UNREACHABLE_TRAP(0x406b70)
    }
}

#undef public_406c8c
#undef public_406d1c
#undef public_406d43
#undef public_406d53
#undef public_406d5f
#undef public_406d69
#undef public_406d72
#undef public_406d80
#undef public_406d91
#undef public_406d9b
#undef public_406e8b
#undef public_406e9d
