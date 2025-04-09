#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4abdf0);
CLANG_FORWARD_PROC_SYMBOL(public_4abfb0);
CLANG_FORWARD_PROC_SYMBOL(public_4ad600);
CLANG_FORWARD_PROC_SYMBOL(public_4ade00);
CLANG_FORWARD_PROC_SYMBOL(public_4af230);
CLANG_FORWARD_PROC_SYMBOL(public_4af900);
CLANG_FORWARD_PROC_SYMBOL(public_577f50);
CLANG_FORWARD_PROC_SYMBOL(public_578220);
CLANG_FORWARD_PROC_SYMBOL(public_58a530);
CLANG_FORWARD_PROC_SYMBOL(public_59d960);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4ad610 _public_4ad610
#define public_4ad640 _public_4ad640
#define public_4ad656 _public_4ad656
#define public_4ad6ce _public_4ad6ce
#define public_4ad6dd _public_4ad6dd
#define public_4ad711 _public_4ad711
#define public_4ad71e _public_4ad71e
#define public_4ad722 _public_4ad722
#define public_4ad782 _public_4ad782
#define public_4ad7a7 _public_4ad7a7
#define public_4ad890 _public_4ad890
#define public_4ad8c4 _public_4ad8c4
#define public_4ad8d1 _public_4ad8d1
#define public_4ad957 _public_4ad957
#define public_4ad964 _public_4ad964

PROC_DECLARE(0x4ad600, internal_4ad600, public_4ad600);
extern "C" NAKED register_t __cdecl internal_4ad600()
{
    __asm
    {
        sub esp, 0x2BC
        push ebx
        push ebp
        push esi
        push edi
        mov ebp, ecx
        xor eax, eax
        mov edi, edi
        public_4ad610 : nop
        mov ecx, dword ptr ss : [esp+0x2D0]
        cmp ecx, dword ptr ds : [eax+public_611e28]
        je public_4ad6ce
        add eax, 4
        cmp eax, 0x20
        jb public_4ad610
        mov dword ptr ss : [ebp+0x880], 0xFFFFFFFF
        mov byte ptr ss : [ebp+0x87D], 0
        xor ebx, ebx
        mov edi, edi
        public_4ad640 : nop
        push ebx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebp
        call public_4ade00
        mov eax, dword ptr ss : [esp+0x14]
        xor edi, edi
        lea esi, ds:[eax+8]
        public_4ad656 : nop
        test eax, eax
        je public_4ad722
        mov ecx, dword ptr ss : [esp+0x18]
        sub ecx, eax
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        cmp edi, edx
        jae public_4ad71e
        cmp dword ptr ss : [ebp+0x880], 0xFFFFFFFF
        jne public_4ad711
        mov eax, dword ptr ss : [esp+0x2D0]
        cmp eax, dword ptr ds : [esi-4]
        jne public_4ad6dd
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ss : [esp+0x2D4]
        jne public_4ad6dd
        mov eax, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [ebp+0x880], edi
        mov dword ptr ss : [ebp+0x884], ebx
        mov edx, dword ptr ds : [esi+0x18]
        inc edi
        mov dword ptr ss : [ebp+0x888], edx
        mov byte ptr ss : [ebp+0x87D], 0
        mov byte ptr ss : [ebp+0x87E], 1
        add esi, 0x2C
        jmp public_4ad656
        public_4ad6ce : nop
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x2BC
        ret 8
        public_4ad6dd : nop
        cmp eax, dword ptr ds : [esi+8]
        jne public_4ad711
        mov eax, dword ptr ss : [esp+0x2D4]
        cmp dword ptr ds : [esi+0xC], eax
        jne public_4ad711
        mov dword ptr ss : [ebp+0x880], edi
        mov dword ptr ss : [ebp+0x884], ebx
        mov ecx, dword ptr ds : [esi+0x18]
        mov dword ptr ss : [ebp+0x888], ecx
        mov byte ptr ss : [ebp+0x87D], 1
        mov byte ptr ss : [ebp+0x87E], 1
        public_4ad711 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc edi
        add esi, 0x2C
        jmp public_4ad656
        public_4ad71e : nop
        mov eax, dword ptr ss : [esp+0x14]
        public_4ad722 : nop
        push eax
        call public_5b7e1d
        xor eax, eax
        add esp, 4
        inc ebx
        cmp ebx, 4
        mov dword ptr ss : [esp+0x14], eax
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], eax
        jl public_4ad640
        mov eax, dword ptr ss : [ebp+0x880]
        test eax, eax
        jge public_4ad8c4
        mov al, byte ptr ss : [ebp+0x87C]
        test al, al
        je public_4ad782
        mov edx, dword ptr ss : [ebp+0x864]
        mov eax, dword ptr ss : [ebp+0x860]
        mov ecx, dword ptr ss : [esp+0x2D4]
        push edx
        mov edx, dword ptr ss : [esp+0x2D4]
        push eax
        mov eax, dword ptr ss : [ebp+0x870]
        push ecx
        push edx
        push eax
        jmp public_4ad7a7
        public_4ad782 : nop
        mov ecx, dword ptr ss : [ebp+0x858]
        mov edx, dword ptr ss : [ebp+0x854]
        mov eax, dword ptr ss : [esp+0x2D4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x2D4]
        push edx
        mov edx, dword ptr ss : [ebp+0x870]
        push eax
        push ecx
        push edx
        public_4ad7a7 : nop
        call public_578220
        mov ecx, dword ptr ss : [ebp+0x7AC]
        mov byte ptr ss : [ebp+0x848], 1
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [ecx+0x348], eax
        mov edx, dword ptr ss : [ebp+0x7A8]
        mov byte ptr ds : [edx+0x37C], 0
        mov eax, dword ptr ss : [ebp+0x7A8]
        mov cl, byte ptr ds : [eax+0x388]
        or cl, 4
        add esp, 0x14
        mov byte ptr ds : [eax+0x388], cl
/*FIXUP push offset public_5d4cbc @0x4ad7e9*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5d4cbc
        mov ecx, ebp
        call public_4af230
        mov ecx, dword ptr ss : [ebp+0x4B8]
        mov eax, dword ptr ds : [ecx]
        push 0
        push 0
        push 0x3B
        call dword ptr ds : [eax+0xA8]
        push eax
        mov ecx, ebp
        call public_4af900
        push ebp
        mov byte ptr ss : [ebp+0x84C], 0
        call public_59d960
        mov ecx, dword ptr ss : [ebp+0x4E8]
        mov bl, byte ptr ds : [ecx+0x6C]
        mov al, 0xFC
        and bl, al
        mov byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ss : [ebp+0x4EC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x4F0]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x4FC]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x500]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x4F4]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x4F8]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x4E4]
        mov dl, byte ptr ds : [ecx+0x6C]
        and dl, al
        add esp, 4
        mov byte ptr ds : [ecx+0x6C], dl
        push 0
        mov ecx, ebp
        call public_4abdf0
        lea eax, ss:[ebp+0x484]
        mov edx, 0xD
        mov bl, 3
        nop 
        lea esp, ss:[esp]
        public_4ad890 : nop
        mov ecx, dword ptr ds : [eax-0x34]
        or byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [eax]
        or byte ptr ds : [ecx+0x6C], bl
        mov ecx, dword ptr ds : [eax-0x6C]
        or byte ptr ds : [ecx+0x6C], bl
        add eax, 4
        dec edx
        jne public_4ad890
        mov ebp, dword ptr ss : [ebp+0x450]
        mov al, byte ptr ss : [ebp+0x6C]
        pop edi
        or al, bl
        pop esi
        mov byte ptr ss : [ebp+0x6C], al
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x2BC
        ret 8
        public_4ad8c4 : nop
        lea ecx, ss:[ebp+0x484]
        mov esi, 0xD
        mov al, 0xFC
        public_4ad8d1 : nop
        mov edx, dword ptr ds : [ecx-0x34]
        and byte ptr ds : [edx+0x6C], al
        mov edx, dword ptr ds : [ecx]
        and byte ptr ds : [edx+0x6C], al
        mov edx, dword ptr ds : [ecx-0x6C]
        mov bl, byte ptr ds : [edx+0x6C]
        and bl, al
        add ecx, 4
        dec esi
        mov byte ptr ds : [edx+0x6C], bl
        jne public_4ad8d1
        mov ecx, dword ptr ss : [ebp+0x450]
        and byte ptr ds : [ecx+0x6C], al
        mov ecx, dword ptr ss : [ebp+0x884]
        mov esi, dword ptr ss : [ebp+0x880]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        mov ecx, ebp
        mov word ptr ss : [esp+0xD4], 0
        call public_4ade00
        imul esi, 0x2C
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x14]
        add esi, edi
        mov ecx, 0xB
        lea edi, ss:[esp+0x20]
        push eax
        rep movsd
        call public_5b7e1d
        mov al, byte ptr ss : [ebp+0x87D]
        add esp, 4
        test al, al
        push 0x100
        je public_4ad957
        lea ecx, ss:[esp+0xD0]
        push ecx
        lea edx, ss:[esp+0x34]
        push edx
        jmp public_4ad964
        public_4ad957 : nop
        lea eax, ss:[esp+0xD0]
        push eax
        lea ecx, ss:[esp+0x28]
        push ecx
        public_4ad964 : nop
        call public_577f50
        mov ecx, dword ptr ss : [ebp+0x4E8]
        add esp, 0xC
        lea edx, ss:[esp+0xCC]
        push edx
        call public_58a530
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+0x50]
        push eax
        push 0x5EB
        push ecx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x4EC]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ss : [esp+0x38]
        mov eax, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0x50]
        push ecx
        push edx
        push eax
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x4F0]
        mov edx, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x50]
        push eax
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        mov edx, dword ptr ds : [public_67eca8]
        push 0x40
        lea ecx, ss:[esp+0x50]
        push ecx
        push 0x5E8
        push edx
        call public_4347e0
        mov ecx, dword ptr ss : [ebp+0x4FC]
        mov eax, dword ptr ds : [ecx]
        add esp, 0x10
        push 0
        lea edx, ss:[esp+0x50]
        push edx
        push 0x1D
        call dword ptr ds : [eax+0xA8]
        mov ecx, ebp
        call public_4abfb0
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x2BC
        ret 8
        UNREACHABLE_TRAP(0x4ad600)
    }
}

#undef public_4ad610
#undef public_4ad640
#undef public_4ad656
#undef public_4ad6ce
#undef public_4ad6dd
#undef public_4ad711
#undef public_4ad71e
#undef public_4ad722
#undef public_4ad782
#undef public_4ad7a7
#undef public_4ad890
#undef public_4ad8c4
#undef public_4ad8d1
#undef public_4ad957
#undef public_4ad964
