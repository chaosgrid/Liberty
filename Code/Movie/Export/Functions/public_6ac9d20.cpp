#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ac8b30);
CLANG_FORWARD_PROC_SYMBOL(public_6ac8d40);
CLANG_FORWARD_PROC_SYMBOL(public_6ac9d20);

#define public_6ac9d45 _public_6ac9d45
#define public_6ac9d73 _public_6ac9d73
#define public_6ac9e04 _public_6ac9e04
#define public_6ac9e4b _public_6ac9e4b
#define public_6ac9e72 _public_6ac9e72
#define public_6ac9eb7 _public_6ac9eb7
#define public_6ac9ec4 _public_6ac9ec4
#define public_6ac9ec8 _public_6ac9ec8
#define public_6ac9ee0 _public_6ac9ee0
#define public_6ac9eee _public_6ac9eee
#define public_6ac9f0b _public_6ac9f0b
#define public_6ac9f3a _public_6ac9f3a
#define public_6ac9f4c _public_6ac9f4c

PROC_DECLARE(0x6ac9d20, internal_6ac9d20, public_6ac9d20);
extern "C" NAKED register_t __cdecl internal_6ac9d20()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0x10]
        sub esp, 0x51C
        lea edx, ds:[eax+0x1F]
        push ebx
        push ebp
        lea ebp, ds:[ecx+0x1F]
        push esi
        shr edx, 5
        shr ebp, 5
        cmp edx, ebp
        mov ebx, edx
        ja public_6ac9d45
        mov ebx, ebp
        public_6ac9d45 : nop
        mov ecx, dword ptr ss : [esp+0x53C]
        xor esi, esi
        xor eax, eax
        cmp ecx, esi
        setne al
        cmp ebx, esi
        mov dword ptr ss : [esp+0xC], eax
        je public_6ac9f4c
        cmp ebx, 0x40
        ja public_6ac9f4c
        lea eax, ss:[esp+0x324]
        mov ecx, ebx
        public_6ac9d73 : nop
        mov dword ptr ds : [eax-0x204], esi
        mov dword ptr ds : [eax], esi
        mov dword ptr ds : [eax-0x104], esi
        mov dword ptr ds : [eax+0x100], esi
        add eax, 4
        dec ecx
        jne public_6ac9d73
        mov ecx, dword ptr ss : [esp+0x120]
        mov esi, dword ptr ss : [esp+0x52C]
        xor ecx, 1
        push edi
        mov dword ptr ss : [esp+0x124], ecx
        mov ecx, edx
        lea edi, ss:[esp+0x224]
        push edx
        rep movsd
        mov esi, dword ptr ss : [esp+0x53C]
        lea ecx, ds:[ebp*4]
        mov dword ptr ss : [esp+0x24], ecx
        mov eax, ecx
        lea edi, ss:[esp+0x42C]
        shr ecx, 2
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x534]
        push ecx
        call public_6ac8d40
        push ebp
        mov edx, dword ptr ss : [esp+0x53C]
        mov dword ptr ss : [esp+0x328], eax
        push edx
        call public_6ac8d40
        xor edx, edx
        mov dword ptr ss : [esp+0x528], eax
        public_6ac9e04 : nop
        mov eax, edx
        mov dword ptr ss : [esp+0x18], edx
        shl eax, 7
        add eax, edx
        shl eax, 2
        mov ecx, eax
        neg ecx
        mov esi, dword ptr ss : [esp+ecx+0x528]
        test esi, esi
        je public_6ac9eee
        lea esi, ss:[esp+eax+0x124]
        lea ebp, ss:[esp+ecx+0x328]
        mov dword ptr ss : [esp+0x1C], ebp
        mov eax, dword ptr ds : [esi+0x200]
        mov ecx, dword ptr ss : [ebp+0x200]
        cmp eax, ecx
        jb public_6ac9ee0
        public_6ac9e4b : nop
        sub eax, ecx
        push ebx
        mov edi, eax
        lea eax, ss:[esp+0x28]
        push eax
        lea eax, ss:[ebp+0x100]
        push edi
        push eax
        call public_6ac8b30
        lea edx, ds:[esi+0x100]
        lea ecx, ss:[esp+0x24]
        mov eax, edx
        mov dword ptr ss : [esp+0x14], ebx
        public_6ac9e72 : nop
        mov ebp, dword ptr ds : [ecx]
        add ecx, 4
        xor dword ptr ds : [eax], ebp
        mov ebp, dword ptr ss : [esp+0x14]
        add eax, 4
        dec ebp
        mov dword ptr ss : [esp+0x14], ebp
        jne public_6ac9e72
        push ebx
        push edx
        call public_6ac8d40
        mov dword ptr ds : [esi+0x200], eax
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ac9ec4
        mov ebp, dword ptr ss : [esp+0x1C]
        lea ecx, ss:[esp+0x24]
        push ebx
        push ecx
        push edi
        push ebp
        call public_6ac8b30
        lea ecx, ss:[esp+0x24]
        mov eax, esi
        sub ecx, esi
        mov edx, ebx
        public_6ac9eb7 : nop
        mov edi, dword ptr ds : [ecx+eax]
        xor dword ptr ds : [eax], edi
        add eax, 4
        dec edx
        jne public_6ac9eb7
        jmp public_6ac9ec8
        public_6ac9ec4 : nop
        mov ebp, dword ptr ss : [esp+0x1C]
        public_6ac9ec8 : nop
        mov eax, dword ptr ds : [esi+0x200]
        mov ecx, dword ptr ss : [ebp+0x200]
        cmp eax, ecx
        jae public_6ac9e4b
        mov edx, dword ptr ss : [esp+0x18]
        public_6ac9ee0 : nop
        mov eax, 1
        sub eax, edx
        mov edx, eax
        jmp public_6ac9e04
        public_6ac9eee : nop
        mov edi, dword ptr ss : [esp+0x544]
        test edi, edi
        je public_6ac9f0b
        mov eax, edx
        mov ecx, ebx
        shl eax, 7
        add eax, edx
        lea esi, ss:[esp+eax*4+0x224]
        rep movsd
        public_6ac9f0b : nop
        mov eax, dword ptr ss : [esp+0x10]
        test eax, eax
        je public_6ac9f3a
        mov ecx, dword ptr ss : [esp+0x20]
        mov edi, dword ptr ss : [esp+0x540]
        mov eax, edx
        shl eax, 7
        add eax, edx
        mov edx, ecx
        shr ecx, 2
        lea esi, ss:[esp+eax*4+0x124]
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_6ac9f3a : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x51C
        ret 0x18
        public_6ac9f4c : nop
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x51C
        ret 0x18
        UNREACHABLE_TRAP(0x6ac9d20)
    }
}

#undef public_6ac9d45
#undef public_6ac9d73
#undef public_6ac9e04
#undef public_6ac9e4b
#undef public_6ac9e72
#undef public_6ac9eb7
#undef public_6ac9ec4
#undef public_6ac9ec8
#undef public_6ac9ee0
#undef public_6ac9eee
#undef public_6ac9f0b
#undef public_6ac9f3a
#undef public_6ac9f4c
