#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559db0);
CLANG_FORWARD_PROC_SYMBOL(public_55a360);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);
CLANG_FORWARD_JUMP_SYMBOL(public_5c1609);

#define public_55a38e _public_55a38e
#define public_55a39e _public_55a39e
#define public_55a3bb _public_55a3bb
#define public_55a3c9 _public_55a3c9
#define public_55a3d0 _public_55a3d0
#define public_55a3de _public_55a3de
#define public_55a3e8 _public_55a3e8
#define public_55a403 _public_55a403
#define public_55a41c _public_55a41c
#define public_55a454 _public_55a454
#define public_55a45d _public_55a45d
#define public_55a472 _public_55a472
#define public_55a47b _public_55a47b

PROC_DECLARE(0x55a360, internal_55a360, public_55a360);
extern "C" NAKED register_t __cdecl internal_55a360()
{
    __asm
    {
        push 0xFFFFFFFF
/*FIXUP push public_5c1609 @0x55a362*/
  FIXUP push esp
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], eax
  FIXUP mov eax, public_5c1609
  FIXUP mov dword ptr ds : [esp+4], eax
  FIXUP pop eax
        mov eax, dword ptr fs : [0]
        push eax
        mov dword ptr fs : [0], esp
        push ecx
        push ebx
        push ebp
        push esi
        push edi
        mov al, byte ptr ds : [public_679af0]
        xor esi, esi
        test al, al
        mov dword ptr ss : [esp+0x1C], esi
        jne public_55a38e
        call public_559db0
        public_55a38e : nop
        mov ebp, dword ptr ds : [public_679a48]
        cmp ebp, esi
        jne public_55a39e
        mov dword ptr ss : [esp+0x10], esi
        jmp public_55a3bb
        public_55a39e : nop
        mov ecx, dword ptr ds : [public_679a4c]
        sub ecx, ebp
        mov eax, 0x38E38E39
        imul ecx
        sar edx, 3
        mov eax, edx
        shr eax, 0x1F
        add edx, eax
        mov dword ptr ss : [esp+0x10], edx
        public_55a3bb : nop
        cmp dword ptr ss : [esp+0x10], esi
        mov edi, dword ptr ss : [esp+0x28]
        jle public_55a403
        xor ebx, ebx
        jmp public_55a3d0
        public_55a3c9 : nop
        mov ebp, dword ptr ds : [public_679a48]
        nop 
        public_55a3d0 : nop
        test edi, edi
        mov edx, dword ptr ds : [public_5c7078]
        mov ecx, edx
        je public_55a3de
        mov ecx, edi
        public_55a3de : nop
        mov eax, dword ptr ds : [ebx+ebp+4]
        test eax, eax
        jne public_55a3e8
        mov eax, edx
        public_55a3e8 : nop
        push ecx
        push eax
        call dword ptr ds : [public_5c6d24]
        add esp, 8
        test eax, eax
        je public_55a41c
        mov eax, dword ptr ss : [esp+0x10]
        inc esi
        add ebx, 0x24
        cmp esi, eax
        jl public_55a3c9
        public_55a403 : nop
        test edi, edi
        je public_55a47b
        mov cl, byte ptr ds : [edi-1]
        test cl, cl
        lea eax, ds:[edi-1]
        je public_55a472
        cmp cl, 0xFF
        je public_55a472
        dec cl
        mov byte ptr ds : [eax], cl
        jmp public_55a47b
        public_55a41c : nop
        test edi, edi
        mov edx, dword ptr ds : [public_679a48]
        lea ecx, ds:[esi+esi*8]
        lea esi, ds:[edx+ecx*4]
        je public_55a45d
        mov cl, byte ptr ds : [edi-1]
        test cl, cl
        lea eax, ds:[edi-1]
        je public_55a454
        cmp cl, 0xFF
        je public_55a454
        dec cl
        pop edi
        mov byte ptr ds : [eax], cl
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_55a454 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55a45d : nop
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        pop ebx
        mov ecx, dword ptr ss : [esp+4]
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        public_55a472 : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_55a47b : nop
        mov ecx, dword ptr ss : [esp+0x14]
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        mov dword ptr fs : [0], ecx
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x55a360)
    }
}

#undef public_55a38e
#undef public_55a39e
#undef public_55a3bb
#undef public_55a3c9
#undef public_55a3d0
#undef public_55a3de
#undef public_55a3e8
#undef public_55a403
#undef public_55a41c
#undef public_55a454
#undef public_55a45d
#undef public_55a472
#undef public_55a47b
