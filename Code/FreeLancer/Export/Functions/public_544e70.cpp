#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_544e70);

#define public_544eca _public_544eca
#define public_544f10 _public_544f10
#define public_544f2d _public_544f2d
#define public_544f3c _public_544f3c
#define public_544f52 _public_544f52
#define public_544f5a _public_544f5a
#define public_544f7c _public_544f7c
#define public_544f99 _public_544f99
#define public_544fd0 _public_544fd0
#define public_544fed _public_544fed
#define public_544ffc _public_544ffc
#define public_545012 _public_545012
#define public_54501a _public_54501a
#define public_545024 _public_545024
#define public_545028 _public_545028
#define public_545037 _public_545037

PROC_DECLARE(0x544e70, internal_544e70, public_544e70);
extern "C" NAKED register_t __cdecl internal_544e70()
{
    __asm
    {
        sub esp, 0x10
        test ecx, ecx
        push ebx
        push ebp
        push esi
        push edi
        je public_545037
        lea eax, ds:[ecx+0xC]
        test eax, eax
        je public_545037
        mov edi, dword ptr ds : [eax+4]
        test edi, edi
        je public_545037
        mov eax, dword ptr ds : [edi+0x4C]
        and eax, 0x503
        cmp eax, 0x503
        jne public_545037
        mov ebp, dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [ebp]
        cmp eax, 1
        jne public_544eca
        movzx ecx, byte ptr ss : [ebp+0x25]
        and ecx, 0x700
        cmp ecx, 0x200
        je public_545037
        public_544eca : nop
        sub eax, 0x1A
        je public_544f99
        dec eax
        jne public_545037
        push 0x1FE0
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [ebp], 0x19
        call dword ptr ds : [public_5c64f4]
        mov ebx, dword ptr ds : [public_5c6aec]
        lea edx, ss:[esp+0x10]
        add edi, 0xE4
        push edx
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        je public_544f3c
        nop 
        lea esp, ss:[esp]
        public_544f10 : nop
        push esi
        call dword ptr ds : [public_5c6538]
        add esp, 4
        test eax, eax
        je public_544f2d
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+4]
        test al, al
        mov ebp, dword ptr ss : [esp+0x24]
        jne public_544f3c
        public_544f2d : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_544f10
        public_544f3c : nop
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call ebx
        test eax, eax
        jne public_544f52
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call ebx
        public_544f52 : nop
        cmp eax, esi
        je public_544f5a
        test eax, eax
        jne public_544f7c
        public_544f5a : nop
        mov ecx, dword ptr ds : [public_5c6368]
        mov ax, word ptr ds : [ecx]
        xor edx, edx
        mov dx, ax
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x14], 3
        mov dword ptr ss : [ebp+0x10], edx
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_544f7c : nop
        mov ax, word ptr ds : [eax+8]
        xor edx, edx
        mov dx, ax
        pop edi
        pop esi
        mov dword ptr ss : [ebp+0x14], 3
        mov dword ptr ss : [ebp+0x10], edx
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        public_544f99 : nop
        push 0x1FE0
        lea ecx, ss:[esp+0x14]
        mov dword ptr ss : [ebp], 0x19
        call dword ptr ds : [public_5c64f4]
        mov ebx, dword ptr ds : [public_5c64f0]
        lea eax, ss:[esp+0x10]
        add edi, 0xE4
        push eax
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        je public_544ffc
        lea ebx, ds:[ebx]
        public_544fd0 : nop
        push esi
        call dword ptr ds : [public_5c6538]
        add esp, 4
        test eax, eax
        je public_544fed
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        test al, al
        mov ebp, dword ptr ss : [esp+0x24]
        jne public_544ffc
        public_544fed : nop
        lea eax, ss:[esp+0x10]
        push eax
        mov ecx, edi
        call ebx
        mov esi, eax
        test esi, esi
        jne public_544fd0
        public_544ffc : nop
        lea ecx, ss:[esp+0x10]
        push ecx
        mov ecx, edi
        call ebx
        test eax, eax
        jne public_545012
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, edi
        call ebx
        public_545012 : nop
        cmp eax, esi
        je public_54501a
        test eax, eax
        jne public_545024
        public_54501a : nop
        mov eax, dword ptr ds : [public_5c6368]
        mov ax, word ptr ds : [eax]
        jmp public_545028
        public_545024 : nop
        mov ax, word ptr ds : [eax+8]
        public_545028 : nop
        xor ecx, ecx
        mov cx, ax
        mov dword ptr ss : [ebp+0x14], 3
        mov dword ptr ss : [ebp+0x10], ecx
        public_545037 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 4
        UNREACHABLE_TRAP(0x544e70)
    }
}

#undef public_544eca
#undef public_544f10
#undef public_544f2d
#undef public_544f3c
#undef public_544f52
#undef public_544f5a
#undef public_544f7c
#undef public_544f99
#undef public_544fd0
#undef public_544fed
#undef public_544ffc
#undef public_545012
#undef public_54501a
#undef public_545024
#undef public_545028
#undef public_545037
