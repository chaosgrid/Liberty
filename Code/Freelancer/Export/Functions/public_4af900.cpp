#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_4ae030);
CLANG_FORWARD_PROC_SYMBOL(public_4af900);
CLANG_FORWARD_PROC_SYMBOL(public_577f50);
CLANG_FORWARD_PROC_SYMBOL(public_58a530);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5bcf0b);

#define public_4af943 _public_4af943
#define public_4af95a _public_4af95a
#define public_4af976 _public_4af976
#define public_4af994 _public_4af994
#define public_4af998 _public_4af998
#define public_4af9af _public_4af9af
#define public_4af9c5 _public_4af9c5
#define public_4afa42 _public_4afa42
#define public_4afa59 _public_4afa59
#define public_4afa79 _public_4afa79
#define public_4afab7 _public_4afab7
#define public_4afabf _public_4afabf
#define public_4afaed _public_4afaed
#define public_4afb20 _public_4afb20
#define public_4afb27 _public_4afb27
#define public_4afb35 _public_4afb35
#define public_4afb63 _public_4afb63

PROC_DECLARE(0x4af900, internal_4af900, public_4af900);
extern "C" NAKED register_t __cdecl internal_4af900()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5bcf0b @0x4af902*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5bcf0b
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        sub esp, 0x2AC
        push ebx
        push ebp
        push esi
        lea eax, ss:[esp+0x28]
        mov ebx, ecx
        push eax
        mov dword ptr ss : [esp+0x18], ebx
        call public_4ae030
        mov esi, dword ptr ss : [esp+0x2C]
        xor ebp, ebp
        cmp esi, ebp
        mov dword ptr ss : [esp+0x2C0], ebp
        jne public_4af943
        xor edx, edx
        jmp public_4af95a
        public_4af943 : nop
        mov ecx, dword ptr ss : [esp+0x30]
        sub ecx, esi
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov ecx, edx
        shr ecx, 0x1F
        add edx, ecx
        public_4af95a : nop
        mov eax, dword ptr ss : [esp+0x2C8]
        add edx, 0xFFFFFFF3
        cmp eax, edx
        jbe public_4af976
        push esi
        call public_5b7e1d
        add esp, 4
        jmp public_4afb63
        public_4af976 : nop
        mov esi, eax
        imul esi, 0x2C
        push edi
        mov word ptr ss : [esp+0xBC], bp
        mov dword ptr ss : [esp+0x10], ebp
        mov dword ptr ss : [esp+0x14], esi
        lea edi, ds:[ebx+0x37C]
        jmp public_4af998
        public_4af994 : nop
        mov ebx, dword ptr ss : [esp+0x18]
        public_4af998 : nop
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, ebx
        call public_4ae030
        mov edx, dword ptr ds : [eax+4]
        cmp edx, ebp
        jne public_4af9af
        xor edx, edx
        jmp public_4af9c5
        public_4af9af : nop
        mov ecx, dword ptr ds : [eax+8]
        sub ecx, edx
        mov eax, 0x2E8BA2E9
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        public_4af9c5 : nop
        mov ecx, dword ptr ss : [esp+0x2CC]
        mov eax, dword ptr ss : [esp+0x10]
        add eax, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        cmp eax, edx
        push ecx
        setb bl
        call public_5b7e1d
        add esp, 4
        test bl, bl
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x24], ebp
        mov dword ptr ss : [esp+0x28], ebp
        je public_4afb35
        mov edx, dword ptr ss : [esp+0x30]
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [public_679bb0]
        mov ebp, dword ptr ds : [edi+0x34]
        mov ebx, dword ptr ds : [edi+0x68]
        add esi, edx
        mov dword ptr ds : [eax+0x348], ecx
        mov edx, dword ptr ds : [edi+0xD4]
        mov dword ptr ds : [edx+0x384], 0xA
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_4afa42
        mov eax, dword ptr ds : [public_679bb0]
        mov dword ptr ss : [ebp+0x348], eax
        mov ecx, dword ptr ds : [public_679bb0]
        mov dword ptr ds : [ebx+0x348], ecx
        jmp public_4afa59
        public_4afa42 : nop
        mov edx, dword ptr ds : [public_679b94]
        mov dword ptr ss : [ebp+0x348], edx
        mov eax, dword ptr ds : [public_679b94]
        mov dword ptr ds : [ebx+0x348], eax
        public_4afa59 : nop
        mov eax, dword ptr ds : [esi+0x24]
        dec eax
        je public_4afaed
        dec eax
        je public_4afa79
/*FIXUP push offset public_5c8ce0 @0x4afa66*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        mov ecx, ebp
        call public_58a530
/*FIXUP push offset public_5c8ce0 @0x4afa72*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        jmp public_4afabf
        public_4afa79 : nop
        push 0x100
        lea ecx, ss:[esp+0xC0]
        push ecx
        push esi
        call public_577f50
        add esp, 0xC
        lea edx, ss:[esp+0xBC]
        push edx
        mov ecx, ebp
        call public_58a530
        push 0x100
        lea eax, ss:[esp+0xC0]
        push eax
        lea ecx, ds:[esi+0xC]
        push ecx
        call public_577f50
        add esp, 0xC
        public_4afab7 : nop
        lea edx, ss:[esp+0xBC]
        push edx
        public_4afabf : nop
        mov ecx, ebx
        call public_58a530
        mov esi, dword ptr ds : [esi+0x18]
        test esi, esi
        jle public_4afb20
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        lea eax, ss:[esp+0x40]
        push eax
        push esi
        push ecx
        call public_4347e0
        add esp, 0x10
        push 0
        lea eax, ss:[esp+0x40]
        push eax
        jmp public_4afb27
        public_4afaed : nop
        push 0x100
        lea eax, ss:[esp+0xC0]
        push eax
        push esi
        call public_577f50
        add esp, 0xC
        lea ecx, ss:[esp+0xBC]
        push ecx
        mov ecx, ebp
        call public_58a530
        mov al, byte ptr ds : [esi+0x28]
        test al, al
        je public_4afab7
/*FIXUP push offset public_5c8ce0 @0x4afb19*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        jmp public_4afabf
        public_4afb20 : nop
        push 0
/*FIXUP push offset public_5c8ce0 @0x4afb22*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_5c8ce0
        public_4afb27 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx]
        push 0x1D
        call dword ptr ds : [edx+0xA8]
        xor ebp, ebp
        public_4afb35 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ss : [esp+0x14]
        inc eax
        add esi, 0x2C
        add edi, 4
        cmp eax, 0xD
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], esi
        jl public_4af994
        mov eax, dword ptr ss : [esp+0x30]
        push eax
        call public_5b7e1d
        add esp, 4
        pop edi
        public_4afb63 : nop
        mov ecx, dword ptr ss : [esp+0x2B8]
        pop esi
        pop ebp
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x2B8
        ret 4
        UNREACHABLE_TRAP(0x4af900)
    }
}

#undef public_4af943
#undef public_4af95a
#undef public_4af976
#undef public_4af994
#undef public_4af998
#undef public_4af9af
#undef public_4af9c5
#undef public_4afa42
#undef public_4afa59
#undef public_4afa79
#undef public_4afab7
#undef public_4afabf
#undef public_4afaed
#undef public_4afb20
#undef public_4afb27
#undef public_4afb35
#undef public_4afb63
