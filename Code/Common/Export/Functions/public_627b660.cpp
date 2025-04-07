#include "Common-PCH.h"


#define public_627b672 _public_627b672
#define public_627b697 _public_627b697
#define public_627b6a4 _public_627b6a4
#define public_627b6c3 _public_627b6c3
#define public_627b6e7 _public_627b6e7
#define public_627b708 _public_627b708
#define public_627b72d _public_627b72d
#define public_627b820 _public_627b820
#define public_627b858 _public_627b858
#define public_627b885 _public_627b885
#define public_627b8b2 _public_627b8b2

PROC_DECLARE(0x627b660, internal_627b660, public_627b660);
extern "C" NAKED register_t __cdecl internal_627b660()
{
    __asm
    {
        sub esp, 0x40
        push ebx
        mov ebx, ecx
        cmp byte ptr ds : [ebx], 0
        jne public_627b672
        xor eax, eax
        pop ebx
        add esp, 0x40
        ret 
        public_627b672 : nop
        mov byte ptr ds : [public_63fbbe0], 0
        mov al, byte ptr ds : [ebx+1]
        or ecx, 0xFFFFFFFF
        test al, al
        push edi
        mov edi, offset public_63fbbe0
        je public_627b697
        xor eax, eax
        repne scasb
        mov eax, dword ptr ds : [public_639b4d4]
        mov dword ptr ds : [edi-1], eax
        jmp public_627b6a4
        public_627b697 : nop
        xor eax, eax
        repne scasb
        mov ecx, dword ptr ds : [public_639b4d0]
        mov dword ptr ds : [edi-1], ecx
        public_627b6a4 : nop
        mov eax, dword ptr ds : [ebx+4]
        cmp eax, 1
        jne public_627b6c3
        mov edx, dword ptr ds : [public_639b4cc]
        mov edi, offset public_63fbbe0
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        mov dword ptr ds : [edi-1], edx
        jmp public_627b72d
        public_627b6c3 : nop
        cmp eax, 2
        jne public_627b6e7
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_63fbbe0
        repne scasb
        mov eax, dword ptr ds : [public_639b4c4]
        mov cl, byte ptr ds : [public_639b4c8]
        dec edi
        mov dword ptr ds : [edi], eax
        mov byte ptr ds : [edi+4], cl
        jmp public_627b72d
        public_627b6e7 : nop
        test eax, eax
        jne public_627b708
        mov edx, dword ptr ds : [public_639b4bc]
        or ecx, 0xFFFFFFFF
        mov edi, offset public_63fbbe0
        repne scasb
        mov al, byte ptr ds : [public_639b4c0]
        dec edi
        mov dword ptr ds : [edi], edx
        mov byte ptr ds : [edi+4], al
        jmp public_627b72d
        public_627b708 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639b494 @0x627b70e*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b494
        push 0xFE
/*FIXUP push offset public_639b408 @0x627b718*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b408
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x627b722*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        public_627b72d : nop
        mov edi, dword ptr ds : [ebx+8]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        push esi
        mov esi, edi
        mov edi, offset public_63fbbe0
        repne scasb
        mov ecx, edx
        shr ecx, 2
        dec edi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        or ecx, 0xFFFFFFFF
        mov edi, offset public_63fbbe0
        repne scasb
        mov ax, word ptr ds : [public_639b444]
        mov word ptr ds : [edi-1], ax
        mov ecx, dword ptr ds : [ebx+0xC]
        push ecx
        lea edx, ss:[esp+0x10]
/*FIXUP push offset public_639b474 @0x627b775*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b474
        push edx
        call dword ptr ds : [public_639931c]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        add esp, 0xC
        lea edi, ss:[esp+0xC]
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, offset public_63fbbe0
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        or ecx, 0xFFFFFFFF
        lea edi, ds:[ebx+0x10]
        repne scasb
        not ecx
        sub edi, ecx
        mov edx, ecx
        or ecx, 0xFFFFFFFF
        mov esi, edi
        mov edi, offset public_63fbbe0
        repne scasb
        dec edi
        mov ecx, edx
        shr ecx, 2
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        or ecx, 0xFFFFFFFF
        mov edi, offset public_63fbbe0
        repne scasb
        mov ax, word ptr ds : [public_639b444]
        mov word ptr ds : [edi-1], ax
        mov ebx, dword ptr ds : [ebx+0x20]
        test ebx, ebx
        pop esi
        jne public_627b820
        mov dx, word ptr ds : [public_639b2bc]
        or ecx, 0xFFFFFFFF
        xor eax, eax
        mov edi, offset public_63fbbe0
        repne scasb
        mov ecx, dword ptr ds : [public_639b2b8]
        dec edi
        mov dword ptr ds : [edi], ecx
        mov word ptr ds : [edi+4], dx
        pop edi
        mov eax, offset public_63fbbe0
        pop ebx
        add esp, 0x40
        ret 
        public_627b820 : nop
        cmp ebx, 1
        jne public_627b858
        mov dl, byte ptr ds : [public_639b2b6]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, offset public_63fbbe0
        repne scasb
        mov eax, dword ptr ds : [public_639b2b0]
        mov cx, word ptr ds : [public_639b2b4]
        dec edi
        mov dword ptr ds : [edi], eax
        mov word ptr ds : [edi+4], cx
        mov byte ptr ds : [edi+6], dl
        pop edi
        mov eax, offset public_63fbbe0
        pop ebx
        add esp, 0x40
        ret 
        public_627b858 : nop
        cmp ebx, 2
        jne public_627b885
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, offset public_63fbbe0
        repne scasb
        mov eax, dword ptr ds : [public_639b2a8]
        mov ecx, dword ptr ds : [public_639b2ac]
        dec edi
        mov dword ptr ds : [edi], eax
        mov dword ptr ds : [edi+4], ecx
        pop edi
        mov eax, offset public_63fbbe0
        pop ebx
        add esp, 0x40
        ret 
        public_627b885 : nop
        cmp ebx, 3
        jne public_627b8b2
        mov edx, dword ptr ds : [public_639b46c]
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, offset public_63fbbe0
        repne scasb
        mov eax, dword ptr ds : [public_639b470]
        dec edi
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edi+4], eax
        pop edi
        mov eax, offset public_63fbbe0
        pop ebx
        add esp, 0x40
        ret 
        public_627b8b2 : nop
        mov ecx, dword ptr ds : [public_6399028]
/*FIXUP push offset public_639b448 @0x627b8b8*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b448
        push 0x127
/*FIXUP push offset public_639b408 @0x627b8c2*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b408
        mov eax, 0x100001
/*FIXUP push offset public_639b47c @0x627b8cc*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_639b47c
        push eax
        call dword ptr ds : [ecx]
        add esp, 0x14
        pop edi
        mov eax, offset public_63fbbe0
        pop ebx
        add esp, 0x40
        ret 
        UNREACHABLE_TRAP(0x627b660)
    }
}

#undef public_627b672
#undef public_627b697
#undef public_627b6a4
#undef public_627b6c3
#undef public_627b6e7
#undef public_627b708
#undef public_627b72d
#undef public_627b820
#undef public_627b858
#undef public_627b885
#undef public_627b8b2
