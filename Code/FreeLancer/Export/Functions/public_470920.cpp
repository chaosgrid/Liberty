#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401dd0);
CLANG_FORWARD_PROC_SYMBOL(public_436ae0);
CLANG_FORWARD_PROC_SYMBOL(public_470920);
CLANG_FORWARD_PROC_SYMBOL(public_4713f0);
CLANG_FORWARD_PROC_SYMBOL(public_471640);
CLANG_FORWARD_PROC_SYMBOL(public_471660);
CLANG_FORWARD_PROC_SYMBOL(public_5ae590);

#define public_470940 _public_470940
#define public_470953 _public_470953
#define public_470956 _public_470956
#define public_47095a _public_47095a
#define public_4709b9 _public_4709b9
#define public_4709d1 _public_4709d1
#define public_4709db _public_4709db
#define public_4709df _public_4709df
#define public_4709f0 _public_4709f0
#define public_470a2b _public_470a2b
#define public_470a3a _public_470a3a
#define public_470a5b _public_470a5b
#define public_470a7c _public_470a7c
#define public_470a8a _public_470a8a
#define public_470aa9 _public_470aa9
#define public_470ab5 _public_470ab5
#define public_470ad1 _public_470ad1
#define public_470aec _public_470aec
#define public_470af3 _public_470af3
#define public_470b16 _public_470b16

PROC_DECLARE(0x470920, internal_470920, public_470920);
extern "C" NAKED register_t __cdecl internal_470920()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_47095a
        lea esp, ss:[esp]
        public_470940 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setb al
        test al, al
        je public_470953
        mov ebp, dword ptr ss : [ebp]
        jmp public_470956
        public_470953 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_470956 : nop
        cmp ebp, edx
        jne public_470940
        public_47095a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_470ad1
        push 0
        push esi
        mov ecx, edi
        call public_471640
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_471660
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_4709b9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_4709b9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jb public_4709b9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_4709df
        mov dword ptr ds : [eax+8], ebx
        jmp public_4709df
        public_4709b9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_4709d1
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_4709db
        public_4709d1 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_4709db
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_4709db : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_4709df : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_470ab5
        lea ecx, ds:[ecx]
        public_4709f0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x18]
        test cl, cl
        jne public_470ab5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_470a5b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_470a2b
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_470aa9
        public_470a2b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_470a3a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_436ae0
        public_470a3a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x18], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x18], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_5ae590
        jmp public_470aa9
        public_470a5b : nop
        mov dl, byte ptr ds : [ecx+0x18]
        test dl, dl
        jne public_470a7c
        mov byte ptr ds : [eax+0x18], 1
        mov byte ptr ds : [ecx+0x18], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x18], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_470aa9
        public_470a7c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_470a8a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_5ae590
        public_470a8a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x18], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x18], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_436ae0
        public_470aa9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_4709f0
        public_470ab5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x18], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_470ad1 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_470aec
        cmp esi, dword ptr ds : [ecx]
        je public_470af3
        lea ecx, ss:[esp+0x10]
        call public_401dd0
        mov edx, dword ptr ss : [esp+0x10]
        public_470aec : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jae public_470b16
        public_470af3 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_4713f0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_470b16 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x470920)
    }
}

#undef public_470940
#undef public_470953
#undef public_470956
#undef public_47095a
#undef public_4709b9
#undef public_4709d1
#undef public_4709db
#undef public_4709df
#undef public_4709f0
#undef public_470a2b
#undef public_470a3a
#undef public_470a5b
#undef public_470a7c
#undef public_470a8a
#undef public_470aa9
#undef public_470ab5
#undef public_470ad1
#undef public_470aec
#undef public_470af3
#undef public_470b16
