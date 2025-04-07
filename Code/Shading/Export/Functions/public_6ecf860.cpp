#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecb170);
CLANG_FORWARD_PROC_SYMBOL(public_6ecf860);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa60);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfa80);
CLANG_FORWARD_PROC_SYMBOL(public_6ecfab0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c50);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ecf872 _public_6ecf872
#define public_6ecf87a _public_6ecf87a
#define public_6ecf88e _public_6ecf88e
#define public_6ecf896 _public_6ecf896
#define public_6ecf8bc _public_6ecf8bc
#define public_6ecf8be _public_6ecf8be
#define public_6ecf8cf _public_6ecf8cf
#define public_6ecf951 _public_6ecf951
#define public_6ecf996 _public_6ecf996
#define public_6ecf9a8 _public_6ecf9a8
#define public_6ecf9bc _public_6ecf9bc
#define public_6ecf9e0 _public_6ecf9e0
#define public_6ecf9f5 _public_6ecf9f5
#define public_6ecfa02 _public_6ecfa02
#define public_6ecfa13 _public_6ecfa13
#define public_6ecfa23 _public_6ecfa23
#define public_6ecfa40 _public_6ecfa40
#define public_6ecfa54 _public_6ecfa54
#define public_6ecfa57 _public_6ecfa57

PROC_DECLARE(0x6ecf860, internal_6ecf860, public_6ecf860);
extern "C" NAKED register_t __cdecl internal_6ecf860()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [esi+4]
        test ecx, ecx
        push edi
        jne public_6ecf872
        xor eax, eax
        jmp public_6ecf87a
        public_6ecf872 : nop
        mov eax, dword ptr ds : [esi+8]
        sub eax, ecx
        sar eax, 3
        public_6ecf87a : nop
        mov ebx, dword ptr ss : [esp+0x18]
        cmp eax, ebx
        jae public_6ecfa23
        test ecx, ecx
        jne public_6ecf88e
        xor edx, edx
        jmp public_6ecf896
        public_6ecf88e : nop
        mov edx, dword ptr ds : [esi+8]
        sub edx, ecx
        sar edx, 3
        public_6ecf896 : nop
        mov eax, dword ptr ds : [esi+8]
        sub ebx, edx
        mov edx, dword ptr ds : [esi+0xC]
        sub edx, eax
        sar edx, 3
        cmp edx, ebx
        mov edi, eax
        jae public_6ecf951
        test ecx, ecx
        je public_6ecf8bc
        sub eax, ecx
        sar eax, 3
        cmp ebx, eax
        mov ebp, eax
        jb public_6ecf8be
        public_6ecf8bc : nop
        mov ebp, ebx
        public_6ecf8be : nop
        mov ecx, esi
        call public_6ecfa60
        add eax, ebp
        mov dword ptr ss : [esp+0x10], eax
        jns public_6ecf8cf
        xor eax, eax
        public_6ecf8cf : nop
        shl eax, 3
        push eax
        call public_6ed0c5c
        mov ecx, dword ptr ds : [esi+4]
        add esp, 4
        mov ebp, eax
        push ebp
        push edi
        push ecx
        mov ecx, esi
        call public_6ecfa80
        mov edx, dword ptr ss : [esp+0x1C]
        push edx
        push ebx
        push eax
        mov ecx, esi
        mov dword ptr ss : [esp+0x24], eax
        call public_6ecfab0
        mov eax, dword ptr ss : [esp+0x18]
        mov edx, dword ptr ds : [esi+8]
        lea ecx, ds:[eax+ebx*8]
        push ecx
        push edx
        push edi
        mov ecx, esi
        call public_6ecfa80
        mov eax, dword ptr ds : [esi+8]
        mov ecx, dword ptr ds : [esi+4]
        push eax
        push ecx
        mov ecx, esi
        call public_6ecb170
        mov edx, dword ptr ds : [esi+4]
        push edx
        call public_6ed0c50
        mov eax, dword ptr ss : [esp+0x14]
        lea ecx, ss:[ebp+eax*8]
        mov dword ptr ds : [esi+0xC], ecx
        add esp, 4
        mov ecx, esi
        call public_6ecfa60
        add eax, ebx
        lea edx, ss:[ebp+eax*8]
        pop edi
        mov dword ptr ds : [esi+4], ebp
        mov dword ptr ds : [esi+8], edx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6ecf951 : nop
        mov ecx, eax
        sub ecx, edi
        sar ecx, 3
        cmp ecx, ebx
        jae public_6ecf9bc
        lea ecx, ds:[ebx*8]
        mov dword ptr ss : [esp+0x18], ecx
        add ecx, edi
        push ecx
        push eax
        push edi
        mov ecx, esi
        call public_6ecfa80
        mov eax, dword ptr ds : [esi+8]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov edx, eax
        sub edx, edi
        sar edx, 3
        push ebp
        sub ebx, edx
        push ebx
        push eax
        mov ecx, esi
        call public_6ecfab0
        mov ecx, dword ptr ds : [esi+8]
        cmp edi, ecx
        mov eax, edi
        je public_6ecf9a8
        public_6ecf996 : nop
        mov edx, dword ptr ss : [ebp]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [ebp+4]
        mov dword ptr ds : [eax+4], edx
        add eax, 8
        cmp eax, ecx
        jne public_6ecf996
        public_6ecf9a8 : nop
        mov ecx, dword ptr ds : [esi+8]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        add ecx, eax
        mov dword ptr ds : [esi+8], ecx
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6ecf9bc : nop
        test ebx, ebx
        jbe public_6ecfa57
        push eax
        push eax
        shl ebx, 3
        sub eax, ebx
        push eax
        mov ecx, esi
        call public_6ecfa80
        mov ecx, dword ptr ds : [esi+8]
        mov eax, ecx
        sub eax, ebx
        cmp edi, eax
        je public_6ecf9f5
        mov edi, edi
        public_6ecf9e0 : nop
        mov edx, dword ptr ds : [eax-8]
        sub eax, 8
        sub ecx, 8
        cmp eax, edi
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        jne public_6ecf9e0
        public_6ecf9f5 : nop
        lea edx, ds:[ebx+edi]
        cmp edi, edx
        mov eax, edi
        je public_6ecfa13
        mov ecx, dword ptr ss : [esp+0x1C]
        public_6ecfa02 : nop
        mov edi, dword ptr ds : [ecx]
        mov dword ptr ds : [eax], edi
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edi
        add eax, 8
        cmp eax, edx
        jne public_6ecfa02
        public_6ecfa13 : nop
        mov eax, dword ptr ds : [esi+8]
        add eax, ebx
        pop edi
        mov dword ptr ds : [esi+8], eax
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        public_6ecfa23 : nop
        test ecx, ecx
        je public_6ecfa57
        mov edx, dword ptr ds : [esi+8]
        mov eax, edx
        sub eax, ecx
        sar eax, 3
        cmp ebx, eax
        jae public_6ecfa57
        mov eax, edx
        cmp eax, edx
        lea ecx, ds:[ecx+ebx*8]
        je public_6ecfa54
        mov edi, edi
        public_6ecfa40 : nop
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edi
        add eax, 8
        add ecx, 8
        cmp eax, edx
        jne public_6ecfa40
        public_6ecfa54 : nop
        mov dword ptr ds : [esi+8], ecx
        public_6ecfa57 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6ecf860)
    }
}

#undef public_6ecf872
#undef public_6ecf87a
#undef public_6ecf88e
#undef public_6ecf896
#undef public_6ecf8bc
#undef public_6ecf8be
#undef public_6ecf8cf
#undef public_6ecf951
#undef public_6ecf996
#undef public_6ecf9a8
#undef public_6ecf9bc
#undef public_6ecf9e0
#undef public_6ecf9f5
#undef public_6ecfa02
#undef public_6ecfa13
#undef public_6ecfa23
#undef public_6ecfa40
#undef public_6ecfa54
#undef public_6ecfa57
