#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec9da0);
CLANG_FORWARD_PROC_SYMBOL(public_6ecb560);

#define public_6ec9dc5 _public_6ec9dc5
#define public_6ec9e10 _public_6ec9e10
#define public_6ec9e64 _public_6ec9e64
#define public_6ec9e80 _public_6ec9e80
#define public_6ec9ea4 _public_6ec9ea4
#define public_6ec9ec5 _public_6ec9ec5
#define public_6ec9ed6 _public_6ec9ed6
#define public_6ec9eec _public_6ec9eec
#define public_6ec9f03 _public_6ec9f03

PROC_DECLARE(0x6ec9da0, internal_6ec9da0, public_6ec9da0);
extern "C" NAKED register_t __cdecl internal_6ec9da0()
{
    __asm
    {
        sub esp, 0x24
        mov eax, dword ptr ss : [esp+0x28]
        push ebp
        mov ebp, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ss : [ebp]
        cmp eax, ebp
        push esi
        mov esi, dword ptr ss : [esp+0x34]
        mov dword ptr ss : [esp+0x20], ebp
        mov dword ptr ss : [esp+0x34], eax
        je public_6ec9f03
        push ebx
        push edi
        public_6ec9dc5 : nop
        mov ebx, dword ptr ds : [eax+0xC]
        xor eax, eax
        lea edx, ss:[esp+0x10]
        push edx
        mov dword ptr ss : [esp+0x3C], eax
        mov dword ptr ss : [esp+0x14], eax
        mov ecx, dword ptr ds : [ebx]
        push ebx
        call dword ptr ds : [ecx+0x3C]
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x38]
        push ecx
/*FIXUP push offset public_6ed428c @0x6ec9de4*/
  FIXUP push esp
  FIXUP mov dword ptr ds : [esp], offset public_6ed428c
        push ebx
        call dword ptr ds : [eax]
        test eax, eax
        jl public_6ec9eec
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ds : [edx+0x14]
        mov edi, dword ptr ds : [ecx]
        cmp edi, ecx
        mov dword ptr ss : [esp+0x24], ecx
        je public_6ec9ed6
        lea esp, ss:[esp]
        public_6ec9e10 : nop
        mov eax, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [esi], eax
        lea eax, ds:[edi+8]
        mov dword ptr ds : [esi+8], eax
        mov dword ptr ds : [esi+0xC], edx
        mov dword ptr ds : [esi+0x10], ebx
        mov edx, dword ptr ds : [eax+0x90]
        mov dword ptr ss : [esp+0x1C], edx
        mov edx, dword ptr ds : [eax+0x9C]
        mov dword ptr ss : [esp+0x18], edx
        mov edx, dword ptr ds : [eax+0xA8]
        mov dword ptr ss : [esp+0x14], edx
        mov edx, dword ptr ds : [eax+0xB4]
        mov dword ptr ss : [esp+0x20], edx
        test byte ptr ds : [edi+0xE8], 0x20
        je public_6ec9e64
        fld dword ptr ds : [edi+0xF4]
        fchs 
        fstp dword ptr ds : [esi+4]
        jmp public_6ec9ec5
        public_6ec9e64 : nop
        mov edx, dword ptr ds : [eax+0x10]
        fld dword ptr ds : [public_6ed1284]
        mov ecx, dword ptr ds : [edx+4]
        mov ebp, dword ptr ds : [edx+0xC]
        mov edx, dword ptr ds : [edx+0x14]
        imul edx, ebp
        add edx, ecx
        cmp ecx, edx
        je public_6ec9ea4
        nop 
        public_6ec9e80 : nop
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ds : [ecx+8]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [ecx+4]
        faddp 
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [ecx]
        add ecx, ebp
        cmp ecx, edx
        faddp 
        fadd dword ptr ss : [esp+0x20]
        faddp 
        jne public_6ec9e80
        public_6ec9ea4 : nop
        mov eax, dword ptr ds : [eax+0x10]
        mov ecx, dword ptr ds : [eax+0x14]
        mov dword ptr ss : [esp+0x2C], ecx
        mov dword ptr ss : [esp+0x30], 0
        fild qword ptr ss : [esp+0x2C]
        mov ecx, dword ptr ss : [esp+0x24]
        fdivr st, st(1)
        fstp dword ptr ds : [esi+4]
        fstp st(0)
        public_6ec9ec5 : nop
        mov edi, dword ptr ds : [edi]
        add esi, 0x14
        cmp edi, ecx
        jne public_6ec9e10
        mov ebp, dword ptr ss : [esp+0x28]
        public_6ec9ed6 : nop
        mov eax, dword ptr ss : [esp+0x38]
        test eax, eax
        je public_6ec9eec
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x38], 0
        public_6ec9eec : nop
        lea ecx, ss:[esp+0x3C]
        call public_6ecb560
        mov eax, dword ptr ss : [esp+0x3C]
        cmp eax, ebp
        jne public_6ec9dc5
        pop edi
        pop ebx
        public_6ec9f03 : nop
        pop esi
        pop ebp
        add esp, 0x24
        ret 8
        UNREACHABLE_TRAP(0x6ec9da0)
    }
}

#undef public_6ec9dc5
#undef public_6ec9e10
#undef public_6ec9e64
#undef public_6ec9e80
#undef public_6ec9ea4
#undef public_6ec9ec5
#undef public_6ec9ed6
#undef public_6ec9eec
#undef public_6ec9f03
