#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_41b030);
CLANG_FORWARD_PROC_SYMBOL(public_41e610);
CLANG_FORWARD_PROC_SYMBOL(public_59d6d0);
CLANG_FORWARD_PROC_SYMBOL(public_59e7d0);
CLANG_FORWARD_PROC_SYMBOL(public_59e810);
CLANG_FORWARD_PROC_SYMBOL(public_59e860);
CLANG_FORWARD_PROC_SYMBOL(public_59e8d0);
CLANG_FORWARD_PROC_SYMBOL(public_5a2990);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_59d6f0 _public_59d6f0
#define public_59d711 _public_59d711
#define public_59d717 _public_59d717
#define public_59d71f _public_59d71f
#define public_59d725 _public_59d725
#define public_59d72b _public_59d72b
#define public_59d732 _public_59d732
#define public_59d740 _public_59d740
#define public_59d752 _public_59d752
#define public_59d771 _public_59d771
#define public_59d795 _public_59d795
#define public_59d7a3 _public_59d7a3
#define public_59d7b1 _public_59d7b1
#define public_59d7c0 _public_59d7c0
#define public_59d7ce _public_59d7ce
#define public_59d7e6 _public_59d7e6
#define public_59d7f4 _public_59d7f4
#define public_59d7fe _public_59d7fe
#define public_59d808 _public_59d808
#define public_59d829 _public_59d829
#define public_59d82f _public_59d82f
#define public_59d837 _public_59d837
#define public_59d83d _public_59d83d
#define public_59d843 _public_59d843
#define public_59d84a _public_59d84a
#define public_59d860 _public_59d860
#define public_59d872 _public_59d872

PROC_DECLARE(0x59d6d0, internal_59d6d0, public_59d6d0);
extern "C" NAKED register_t __cdecl internal_59d6d0()
{
    __asm
    {
        push ebx
        mov ebx, dword ptr ds : [public_67dbdc]
        push ebp
        xor ebp, ebp
        cmp ebx, ebp
        push esi
        push edi
        mov dword ptr ds : [public_67dcdc], ebp
        mov dword ptr ds : [public_67dce0], ebp
        je public_59d732
        lea esp, ss:[esp]
        public_59d6f0 : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, ebp
        je public_59d72b
        mov edi, dword ptr ds : [eax]
        mov esi, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [eax+8], ebp
        call public_5b7e1d
        add esp, 4
        cmp edi, ebp
        je public_59d711
        mov dword ptr ds : [edi+4], esi
        jmp public_59d717
        public_59d711 : nop
        mov dword ptr ds : [public_67dbe8], esi
        public_59d717 : nop
        cmp esi, ebp
        je public_59d71f
        mov dword ptr ds : [esi], edi
        jmp public_59d725
        public_59d71f : nop
        mov dword ptr ds : [public_67dbec], edi
        public_59d725 : nop
        dec dword ptr ds : [public_67dbe4]
        public_59d72b : nop
        mov ebx, dword ptr ds : [ebx+4]
        cmp ebx, ebp
        jne public_59d6f0
        public_59d732 : nop
        mov eax, dword ptr ds : [public_67dbdc]
        cmp eax, ebp
        je public_59d752
        nop 
        lea esp, ss:[esp]
        public_59d740 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_59d740
        public_59d752 : nop
        mov eax, dword ptr ds : [public_67dbe8]
        cmp eax, ebp
        mov dword ptr ds : [public_67dbd8], ebp
        mov dword ptr ds : [public_67dbe0], ebp
        mov dword ptr ds : [public_67dbdc], ebp
        je public_59d7fe
        public_59d771 : nop
        mov edi, dword ptr ds : [eax+8]
        cmp edi, ebp
        mov ebx, dword ptr ds : [eax+4]
        je public_59d7f4
        mov al, byte ptr ds : [edi+0x6C]
        test al, 4
        jne public_59d7f4
        or al, 4
        mov byte ptr ds : [edi+0x6C], al
        cmp dword ptr ds : [public_67dcdc], edi
        jne public_59d795
        mov dword ptr ds : [public_67dcdc], ebp
        public_59d795 : nop
        cmp dword ptr ds : [public_67dce0], edi
        jne public_59d7a3
        mov dword ptr ds : [public_67dce0], ebp
        public_59d7a3 : nop
        cmp dword ptr ds : [public_67dcd8], edi
        jne public_59d7b1
        mov dword ptr ds : [public_67dcd8], ebp
        public_59d7b1 : nop
        mov esi, dword ptr ds : [public_67dbe8]
        cmp esi, ebp
        je public_59d7f4
        nop 
        lea esp, ss:[esp]
        public_59d7c0 : nop
        cmp dword ptr ds : [esi+8], edi
        je public_59d7ce
        mov esi, dword ptr ds : [esi+4]
        cmp esi, ebp
        jne public_59d7c0
        jmp public_59d7f4
        public_59d7ce : nop
        cmp dword ptr ds : [esi+8], ebp
        je public_59d7f4
        mov eax, dword ptr ds : [edi+4]
        cmp eax, ebp
        je public_59d7e6
        push edi
        lea ecx, ds:[eax+4]
        call public_59e7d0
        mov dword ptr ds : [edi+4], ebp
        public_59d7e6 : nop
        push esi
        mov ecx, offset public_67dbd8
        call public_59e810
        mov dword ptr ds : [esi+8], ebp
        public_59d7f4 : nop
        cmp ebx, ebp
        mov eax, ebx
        jne public_59d771
        public_59d7fe : nop
        mov ebx, dword ptr ds : [public_67dbdc]
        cmp ebx, ebp
        je public_59d84a
        public_59d808 : nop
        mov eax, dword ptr ds : [ebx+8]
        cmp eax, ebp
        je public_59d843
        mov esi, dword ptr ds : [eax]
        mov edi, dword ptr ds : [eax+4]
        push eax
        mov dword ptr ds : [eax+8], ebp
        call public_5b7e1d
        add esp, 4
        cmp esi, ebp
        je public_59d829
        mov dword ptr ds : [esi+4], edi
        jmp public_59d82f
        public_59d829 : nop
        mov dword ptr ds : [public_67dbe8], edi
        public_59d82f : nop
        cmp edi, ebp
        je public_59d837
        mov dword ptr ds : [edi], esi
        jmp public_59d83d
        public_59d837 : nop
        mov dword ptr ds : [public_67dbec], esi
        public_59d83d : nop
        dec dword ptr ds : [public_67dbe4]
        public_59d843 : nop
        mov ebx, dword ptr ds : [ebx+4]
        cmp ebx, ebp
        jne public_59d808
        public_59d84a : nop
        mov ecx, offset public_67dbd8
        call public_59e860
        mov eax, dword ptr ds : [public_67dbe8]
        cmp eax, ebp
        je public_59d872
        lea ecx, ds:[ecx]
        public_59d860 : nop
        mov esi, dword ptr ds : [eax+4]
        push eax
        call public_5b7e1d
        add esp, 4
        cmp esi, ebp
        mov eax, esi
        jne public_59d860
        public_59d872 : nop
        mov ecx, offset public_67dcf4
        mov dword ptr ds : [public_67dbe4], ebp
        mov dword ptr ds : [public_67dbec], ebp
        mov dword ptr ds : [public_67dbe8], ebp
        call public_59e8d0
/*FIXUP push offset public_67dbc8 @0x59d88e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_67dbc8
        call public_41b030
        add esp, 4
        call public_41e610
        call public_5a2990
        pop edi
        pop esi
        pop ebp
        mov ecx, offset public_67dbf8
        pop ebx
        jmp public_401e90
        UNREACHABLE_TRAP(0x59d6d0)
    }
}

#undef public_59d6f0
#undef public_59d711
#undef public_59d717
#undef public_59d71f
#undef public_59d725
#undef public_59d72b
#undef public_59d732
#undef public_59d740
#undef public_59d752
#undef public_59d771
#undef public_59d795
#undef public_59d7a3
#undef public_59d7b1
#undef public_59d7c0
#undef public_59d7ce
#undef public_59d7e6
#undef public_59d7f4
#undef public_59d7fe
#undef public_59d808
#undef public_59d829
#undef public_59d82f
#undef public_59d837
#undef public_59d83d
#undef public_59d843
#undef public_59d84a
#undef public_59d860
#undef public_59d872
