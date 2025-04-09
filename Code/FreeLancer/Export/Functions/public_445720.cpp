#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445720);

#define public_445745 _public_445745
#define public_445758 _public_445758
#define public_445760 _public_445760
#define public_445773 _public_445773
#define public_445775 _public_445775
#define public_4457ab _public_4457ab
#define public_445884 _public_445884
#define public_44592f _public_44592f
#define public_4459a6 _public_4459a6
#define public_4459c6 _public_4459c6
#define public_4459e4 _public_4459e4
#define public_445a44 _public_445a44
#define public_445a49 _public_445a49

PROC_DECLARE(0x445720, internal_445720, public_445720);
extern "C" NAKED register_t __cdecl internal_445720()
{
    __asm
    {
        sub esp, 0x14
        push ebx
        push ebp
        push esi
        mov ebp, ecx
        lea eax, ss:[ebp+0x178]
        push edi
        push eax
        call dword ptr ds : [public_5c60e4]
        mov ecx, eax
        call dword ptr ds : [public_5c61e8]
        cmp eax, 1
        jne public_445758
        xor eax, eax
        public_445745 : nop
        mov cl, byte ptr ds : [eax+public_5cbb64]
        mov byte ptr ds : [eax+public_668848], cl
        inc eax
        test cl, cl
        jne public_445745
        jmp public_4457ab
        public_445758 : nop
        cmp eax, 2
        jne public_445773
        xor eax, eax
        nop 
        public_445760 : nop
        mov cl, byte ptr ds : [eax+public_5cbb5c]
        mov byte ptr ds : [eax+public_668848], cl
        inc eax
        test cl, cl
        jne public_445760
        jmp public_4457ab
        public_445773 : nop
        xor eax, eax
        public_445775 : nop
        mov cl, byte ptr ds : [eax+public_5c865c]
        mov byte ptr ds : [eax+public_668848], cl
        inc eax
        test cl, cl
        jne public_445775
        mov ecx, dword ptr ds : [public_5c6d18]
/*FIXUP push offset public_5cbb10 @0x44578c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbb10
        push 0x51F
/*FIXUP push offset public_5cb964 @0x445796*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb964
        mov eax, 0x100001
/*FIXUP push offset public_5c747c @0x4457a0*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c747c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_4457ab : nop
        mov edx, dword ptr ds : [public_611024]
        mov esi, dword ptr ss : [esp+0x28]
        mov ebx, dword ptr ds : [public_5c6d24]
        push edx
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_445884
        mov dl, byte ptr ds : [public_5cbb0e]
        or ecx, 0xFFFFFFFF
        mov edi, offset public_668848
        repne scasb
        mov eax, dword ptr ds : [public_5cbb08]
        mov cx, word ptr ds : [public_5cbb0c]
        dec edi
        mov dword ptr ds : [edi], eax
        mov word ptr ds : [edi+4], cx
        mov byte ptr ds : [edi+6], dl
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+0x34]
        push eax
        call dword ptr ds : [public_5c6090]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+4]
        or ecx, 0xFFFFFFFF
        mov edi, eax
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, offset public_668848
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        or ecx, 0xFFFFFFFF
        mov edi, offset public_668848
        repne scasb
        not ecx
        dec ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov edi, offset public_5cbb00
        repne scasb
        not ecx
        dec ecx
        cmp edx, ecx
        jle public_445a44
        sub edx, ecx
        add edx, offset public_668848
        mov esi, edx
/*FIXUP push offset public_5cbb00 @0x44585f*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cbb00
        push esi
        call ebx
        add esp, 8
        test eax, eax
        mov eax, offset public_668848
        jne public_445a49
        pop edi
        mov byte ptr ds : [esi], 0
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        public_445884 : nop
        mov eax, dword ptr ds : [public_611028]
        push eax
        push esi
        call ebx
        add esp, 8
        test eax, eax
        jne public_44592f
        mov ecx, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [ecx+0x34]
        push eax
        call dword ptr ds : [public_5c6090]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+0x14]
        or ecx, 0xFFFFFFFF
        mov edx, eax
        xor eax, eax
        mov edi, edx
        repne scasb
        not ecx
        sub edi, ecx
        mov ebx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, offset public_668848
        repne scasb
        mov ecx, ebx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        cmp byte ptr ds : [edx], 0
        jne public_445a44
        mov eax, dword ptr ss : [ebp+8]
        mov eax, dword ptr ds : [eax+0x34]
        push eax
        call dword ptr ds : [public_5c6090]
        mov edx, dword ptr ds : [eax]
        add esp, 4
        mov ecx, eax
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push eax
        mov eax, dword ptr ds : [public_5c6d18]
        push 0x54A
/*FIXUP push offset public_5cb964 @0x44590b*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb964
        mov ecx, 0x100001
/*FIXUP push offset public_5cba98 @0x445915*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cba98
        push ecx
        call dword ptr ds : [eax]
        add esp, 0x18
        pop edi
        pop esi
        pop ebp
        mov eax, offset public_668848
        pop ebx
        add esp, 0x14
        ret 4
        public_44592f : nop
        mov ecx, dword ptr ds : [public_611014]
        push ecx
        push esi
        call ebx
        add esp, 8
        test eax, eax
        je public_4459c6
        mov edx, dword ptr ds : [public_611018]
        push edx
        push esi
        call ebx
        add esp, 8
        test eax, eax
        je public_4459c6
        mov eax, dword ptr ds : [public_61101c]
        push eax
        push esi
        call ebx
        add esp, 8
        test eax, eax
        je public_4459a6
        mov ecx, dword ptr ds : [public_611020]
        push ecx
        push esi
        call ebx
        add esp, 8
        test eax, eax
        je public_4459a6
        mov edx, dword ptr ds : [public_5c6d18]
        push esi
        push 0x571
/*FIXUP push offset public_5cb964 @0x445982*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cb964
        mov eax, 0x100001
/*FIXUP push offset public_5cba50 @0x44598c*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5cba50
        push eax
        call dword ptr ds : [edx]
        add esp, 0x14
        pop edi
        pop esi
        pop ebp
        mov eax, offset public_668848
        pop ebx
        add esp, 0x14
        ret 4
        public_4459a6 : nop
        mov dl, byte ptr ds : [public_5cba4a]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_668848
        repne scasb
        mov eax, dword ptr ds : [public_5cba44]
        mov cx, word ptr ds : [public_5cba48]
        jmp public_4459e4
        public_4459c6 : nop
        mov dl, byte ptr ds : [public_5cba42]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_668848
        repne scasb
        mov eax, dword ptr ds : [public_5cba3c]
        mov cx, word ptr ds : [public_5cba40]
        public_4459e4 : nop
        dec edi
        mov dword ptr ds : [edi], eax
        mov word ptr ds : [edi+4], cx
        mov byte ptr ds : [edi+6], dl
        mov eax, dword ptr ss : [ebp+0x164]
        lea ecx, ss:[esp+0x28]
        lea edx, ss:[esp+0x10]
        push ecx
        push edx
        mov dword ptr ss : [esp+0x30], eax
        mov byte ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x18], 0
        call dword ptr ds : [public_5c61e4]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 8
        lea edi, ss:[esp+0x14]
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, offset public_668848
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        public_445a44 : nop
        mov eax, offset public_668848
        public_445a49 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x14
        ret 4
        UNREACHABLE_TRAP(0x445720)
    }
}

#undef public_445745
#undef public_445758
#undef public_445760
#undef public_445773
#undef public_445775
#undef public_4457ab
#undef public_445884
#undef public_44592f
#undef public_4459a6
#undef public_4459c6
#undef public_4459e4
#undef public_445a44
#undef public_445a49
