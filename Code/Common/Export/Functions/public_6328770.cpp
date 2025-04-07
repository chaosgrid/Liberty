#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6307460);
CLANG_FORWARD_PROC_SYMBOL(public_6329c70);
CLANG_FORWARD_JUMP_SYMBOL(public_6397194);

#define public_63287c3 _public_63287c3
#define public_63287ce _public_63287ce
#define public_63287e5 _public_63287e5
#define public_63287f8 _public_63287f8
#define public_6328832 _public_6328832
#define public_6328841 _public_6328841
#define public_6328855 _public_6328855
#define public_6328871 _public_6328871
#define public_6328887 _public_6328887
#define public_63288a4 _public_63288a4
#define public_63288be _public_63288be
#define public_63288c2 _public_63288c2

PROC_DECLARE(0x6328770, internal_6328770, public_6328770);
extern "C" NAKED register_t __cdecl internal_6328770()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_6397194 @0x6328772*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_6397194
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        push edi
        mov dword ptr ss : [esp+0x10], ebp
        mov al, byte ptr ss : [esp+0x28]
        xor edx, edx
        lea esi, ss:[ebp+4]
        mov dword ptr ss : [esp+0x1C], edx
        mov byte ptr ds : [esi], al
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi+0xC], edx
        mov eax, dword ptr ss : [esp+0x28]
        cmp eax, edx
        mov ebx, dword ptr ss : [esp+0x24]
        mov byte ptr ss : [esp+0x1C], 1
        mov dword ptr ss : [ebp], offset public_63a3fec
        jge public_63287c3
        mov eax, dword ptr ds : [ebx+8]
        public_63287c3 : nop
        mov ecx, dword ptr ds : [ebx+8]
        mov edi, ecx
        cmp eax, edi
        jae public_63287ce
        mov edi, eax
        public_63287ce : nop
        cmp esi, ebx
        jne public_6328841
        cmp dword ptr ds : [esi+8], edi
        mov ecx, dword ptr ds : [public_6399170]
        mov ebx, dword ptr ds : [ecx]
        jae public_63287e5
        call dword ptr ds : [public_63991c4]
        public_63287e5 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov eax, dword ptr ds : [esi+8]
        sub eax, edi
        cmp eax, ebx
        jae public_63287f8
        mov ebx, eax
        public_63287f8 : nop
        test ebx, ebx
        jbe public_6328832
        mov ecx, dword ptr ds : [esi+4]
        sub eax, ebx
        push eax
        lea edx, ds:[ebx+edi]
        lea eax, ds:[ecx+edx*2]
        push eax
        lea ecx, ds:[ecx+edi*2]
        push ecx
        call public_6329c70
        mov edi, dword ptr ds : [esi+8]
        add esp, 0xC
        push 0
        sub edi, ebx
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_6328832
        push edi
        mov ecx, esi
        call dword ptr ds : [public_639916c]
        public_6328832 : nop
        mov ecx, esi
        call dword ptr ds : [public_63991c8]
        mov eax, ebp
        jmp public_63288c2
        public_6328841 : nop
        cmp edi, edx
        jbe public_6328887
        cmp edi, ecx
        jne public_6328887
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, edx
        jne public_6328855
        mov eax, dword ptr ds : [public_639914c]
        public_6328855 : nop
        cmp byte ptr ds : [eax-1], 0xFE
        jae public_6328887
        push 1
        mov ecx, esi
        call dword ptr ds : [public_6399160]
        mov eax, dword ptr ds : [ebx+4]
        test eax, eax
        jne public_6328871
        mov eax, dword ptr ds : [public_639914c]
        public_6328871 : nop
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ebx+8]
        mov dword ptr ds : [esi+8], edx
        mov ecx, dword ptr ds : [ebx+0xC]
        mov dword ptr ds : [esi+0xC], ecx
        inc byte ptr ds : [eax-1]
        mov eax, ebp
        jmp public_63288c2
        public_6328887 : nop
        push 1
        push edi
        mov ecx, esi
        call dword ptr ds : [public_6399150]
        test al, al
        je public_63288be
        mov ebx, dword ptr ds : [ebx+4]
        test ebx, ebx
        mov eax, dword ptr ds : [public_639914c]
        je public_63288a4
        mov eax, ebx
        public_63288a4 : nop
        mov edx, dword ptr ds : [esi+4]
        push edi
        push eax
        push edx
        call public_6307460
        mov eax, dword ptr ds : [esi+4]
        mov dword ptr ds : [esi+8], edi
        add esp, 0xC
        mov word ptr ds : [eax+edi*2], 0
        public_63288be : nop
        mov eax, dword ptr ss : [esp+0x10]
        public_63288c2 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 8
        UNREACHABLE_TRAP(0x6328770)
    }
}

#undef public_63287c3
#undef public_63287ce
#undef public_63287e5
#undef public_63287f8
#undef public_6328832
#undef public_6328841
#undef public_6328855
#undef public_6328871
#undef public_6328887
#undef public_63288a4
#undef public_63288be
#undef public_63288c2
