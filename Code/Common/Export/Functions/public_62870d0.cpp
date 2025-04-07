#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6271cc0);
CLANG_FORWARD_PROC_SYMBOL(public_628eed0);
CLANG_FORWARD_PROC_SYMBOL(public_62b9490);
CLANG_FORWARD_PROC_SYMBOL(public_630cd00);

#define public_6287103 _public_6287103
#define public_6287116 _public_6287116
#define public_6287120 _public_6287120
#define public_628713d _public_628713d
#define public_6287143 _public_6287143
#define public_628717c _public_628717c
#define public_62871a0 _public_62871a0
#define public_62871b2 _public_62871b2
#define public_62871b8 _public_62871b8
#define public_62871d1 _public_62871d1
#define public_62871df _public_62871df

PROC_DECLARE(0x62870d0, internal_62870d0, public_62870d0);
extern "C" NAKED register_t __cdecl internal_62870d0()
{
    __asm
    {
        sub esp, 0xC
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx]
        push ebx
        push ebp
        push esi
        push edi
        add edx, 4
        lea edi, ds:[ecx+4]
        cmp edi, edx
        mov dword ptr ss : [esp+0x10], ecx
        mov dword ptr ds : [ecx], eax
        je public_628717c
        mov esi, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov edx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x14], edx
        je public_6287116
        public_6287103 : nop
        cmp ebp, edx
        je public_6287116
        mov ebx, dword ptr ss : [ebp+8]
        mov dword ptr ds : [eax+8], ebx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebp, dword ptr ss : [ebp]
        jne public_6287103
        public_6287116 : nop
        cmp eax, esi
        mov ebx, eax
        je public_628713d
        lea esp, ss:[esp]
        public_6287120 : nop
        mov eax, ebx
        mov ebx, dword ptr ds : [ebx]
        push eax
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, edi
        call public_6271cc0
        cmp ebx, esi
        jne public_6287120
        mov edx, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_628713d : nop
        cmp ebp, edx
        mov ebx, ebp
        je public_628717c
        public_6287143 : nop
        mov edx, dword ptr ds : [esi+4]
        push edx
        push esi
        mov ecx, edi
        call public_62b9490
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ds:[ebx+8]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_630cd00
        mov ecx, dword ptr ds : [edi+8]
        mov eax, dword ptr ss : [esp+0x1C]
        add esp, 8
        inc ecx
        mov dword ptr ds : [edi+8], ecx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jne public_6287143
        mov ecx, dword ptr ss : [esp+0x10]
        public_628717c : nop
        mov eax, dword ptr ss : [esp+0x20]
        lea edx, ds:[eax+0x10]
        lea ebp, ds:[ecx+0x10]
        cmp ebp, edx
        je public_62871df
        mov esi, dword ptr ss : [ebp+4]
        mov eax, dword ptr ds : [esi]
        cmp eax, esi
        mov ecx, dword ptr ds : [edx+4]
        mov ebx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x14], ecx
        je public_62871b2
        lea esp, ss:[esp]
        public_62871a0 : nop
        cmp ebx, ecx
        je public_62871b2
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [eax]
        cmp eax, esi
        mov ebx, dword ptr ds : [ebx]
        jne public_62871a0
        public_62871b2 : nop
        cmp eax, esi
        mov edi, eax
        je public_62871d1
        public_62871b8 : nop
        mov eax, edi
        mov edi, dword ptr ds : [edi]
        push eax
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebp
        call public_6271cc0
        cmp edi, esi
        jne public_62871b8
        mov ecx, dword ptr ss : [esp+0x14]
        public_62871d1 : nop
        push ecx
        push ebx
        push esi
        mov ecx, ebp
        call public_628eed0
        mov ecx, dword ptr ss : [esp+0x10]
        public_62871df : nop
        mov edx, dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [edx+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx+0x1C], eax
        mov eax, ecx
        pop ebx
        add esp, 0xC
        ret 4
        UNREACHABLE_TRAP(0x62870d0)
    }
}

#undef public_6287103
#undef public_6287116
#undef public_6287120
#undef public_628713d
#undef public_6287143
#undef public_628717c
#undef public_62871a0
#undef public_62871b2
#undef public_62871b8
#undef public_62871d1
#undef public_62871df
