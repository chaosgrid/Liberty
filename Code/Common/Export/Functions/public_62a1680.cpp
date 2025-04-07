#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6282f90);
CLANG_FORWARD_PROC_SYMBOL(public_62a01e0);
CLANG_FORWARD_PROC_SYMBOL(public_62a1680);
CLANG_FORWARD_PROC_SYMBOL(public_62be400);
CLANG_FORWARD_PROC_SYMBOL(public_63429f0);
CLANG_FORWARD_PROC_SYMBOL(public_6391d5a);

#define public_62a16a0 _public_62a16a0
#define public_62a16b7 _public_62a16b7
#define public_62a16d0 _public_62a16d0
#define public_62a16dd _public_62a16dd
#define public_62a16e5 _public_62a16e5
#define public_62a16ef _public_62a16ef
#define public_62a16f6 _public_62a16f6
#define public_62a16fa _public_62a16fa
#define public_62a1720 _public_62a1720
#define public_62a173f _public_62a173f
#define public_62a1766 _public_62a1766
#define public_62a1770 _public_62a1770
#define public_62a1790 _public_62a1790

PROC_DECLARE(0x62a1680, internal_62a1680, public_62a1680);
extern "C" NAKED register_t __cdecl internal_62a1680()
{
    __asm
    {
        sub esp, 0xC
        push ebx
        push ebp
        mov ebp, ecx
        mov ebx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+0x14]
        push esi
        mov esi, dword ptr ds : [ebx]
        cmp esi, ebx
        push edi
        mov dword ptr ss : [esp+0x10], eax
        je public_62a16fa
        lea esp, ss:[esp]
        public_62a16a0 : nop
        mov edi, dword ptr ds : [esi+0x10]
        test edi, edi
        je public_62a16b7
        mov ecx, edi
        call public_62a01e0
        push edi
        call public_6391d5a
        add esp, 4
        public_62a16b7 : nop
        mov eax, dword ptr ds : [esi+8]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62a16dd
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        jne public_62a16f6
        lea esp, ss:[esp]
        public_62a16d0 : nop
        mov esi, eax
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x15]
        test cl, cl
        je public_62a16d0
        jmp public_62a16f6
        public_62a16dd : nop
        mov eax, dword ptr ds : [esi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_62a16ef
        public_62a16e5 : nop
        mov esi, eax
        mov eax, dword ptr ds : [eax+4]
        cmp esi, dword ptr ds : [eax+8]
        je public_62a16e5
        public_62a16ef : nop
        cmp dword ptr ds : [esi+8], eax
        je public_62a16f6
        mov esi, eax
        public_62a16f6 : nop
        cmp esi, ebx
        jne public_62a16a0
        public_62a16fa : nop
        mov edi, dword ptr ss : [ebp+8]
        mov ecx, dword ptr ss : [ebp+0x14]
        test ecx, ecx
        mov eax, dword ptr ds : [edi]
        lea esi, ss:[ebp+4]
        mov dword ptr ss : [esp+0x14], eax
        je public_62a1766
        mov ecx, eax
        cmp eax, ecx
        jne public_62a1766
        mov ebx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [esi+8]
        mov edi, ebx
        je public_62a173f
        lea ecx, ds:[ecx]
        public_62a1720 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ecx
        mov ecx, esi
        call public_6282f90
        mov edi, dword ptr ds : [edi]
        push ebx
        call public_6391d5a
        mov eax, dword ptr ds : [esi+8]
        add esp, 4
        cmp edi, eax
        mov ebx, edi
        jne public_62a1720
        public_62a173f : nop
        mov eax, dword ptr ds : [esi+8]
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+4], eax
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+0x10], 0
        mov dword ptr ds : [eax], eax
        mov esi, dword ptr ds : [esi+4]
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        mov dword ptr ds : [esi+8], esi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        public_62a1766 : nop
        cmp eax, edi
        je public_62a1790
        lea ebx, ds:[ebx]
        public_62a1770 : nop
        lea ecx, ss:[esp+0x14]
        mov ebx, eax
        call public_63429f0
        push ebx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, esi
        call public_62be400
        mov eax, dword ptr ss : [esp+0x14]
        cmp eax, edi
        jne public_62a1770
        public_62a1790 : nop
        mov eax, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x62a1680)
    }
}

#undef public_62a16a0
#undef public_62a16b7
#undef public_62a16d0
#undef public_62a16dd
#undef public_62a16e5
#undef public_62a16ef
#undef public_62a16f6
#undef public_62a16fa
#undef public_62a1720
#undef public_62a173f
#undef public_62a1766
#undef public_62a1770
#undef public_62a1790
