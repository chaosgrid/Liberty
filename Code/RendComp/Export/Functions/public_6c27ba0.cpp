#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c27ba0);

#define public_6c27c11 _public_6c27c11
#define public_6c27c38 _public_6c27c38
#define public_6c27c61 _public_6c27c61
#define public_6c27c7c _public_6c27c7c
#define public_6c27c8d _public_6c27c8d
#define public_6c27ca5 _public_6c27ca5

PROC_DECLARE(0x6c27ba0, internal_6c27ba0, public_6c27ba0);
extern "C" NAKED register_t __cdecl internal_6c27ba0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2C]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax+0x10]
        fchs 
        mov ecx, dword ptr ds : [ecx+0x18]
        push ebx
        push esi
        mov esi, dword ptr ds : [eax+0xC]
        push edi
        mov edi, dword ptr ds : [eax+4]
        mov eax, dword ptr ss : [esp+0x10]
        lea eax, ds:[eax+eax*2]
        lea ebx, ds:[ecx+eax*2]
        movzx eax, word ptr ds : [ebx]
        mov eax, dword ptr ds : [edx+eax*4]
        movzx ecx, word ptr ds : [ebx+2]
        imul eax, esi
        fld dword ptr ds : [eax+edi+8]
        mov ecx, dword ptr ds : [edx+ecx*4]
        movzx ebx, word ptr ds : [ebx+4]
        imul ecx, esi
        mov edx, dword ptr ds : [edx+ebx*4]
        add eax, edi
        imul edx, esi
        mov esi, dword ptr ss : [esp+0x14]
        add ecx, edi
        add edx, edi
        fmul dword ptr ds : [esi+8]
        mov edi, 1
        fld dword ptr ds : [eax+4]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [eax]
        faddp 
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6c27c11
        mov edi, 2
        public_6c27c11 : nop
        fld dword ptr ds : [ecx+8]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [ecx+4]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [ecx]
        mov ecx, 1
        faddp 
        fcomp 
        fnstsw ax
        test ah, 0x41
        je public_6c27c38
        mov ecx, 2
        public_6c27c38 : nop
        fld dword ptr ds : [edx+8]
        fmul dword ptr ds : [esi+8]
        fld dword ptr ds : [edx+4]
        fmul dword ptr ds : [esi+4]
        faddp 
        fld dword ptr ds : [esi]
        fmul dword ptr ds : [edx]
        faddp 
        fcomp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        mov eax, 1
        je public_6c27c61
        mov eax, 2
        public_6c27c61 : nop
        cmp edi, 1
        pop edi
        pop esi
        pop ebx
        jne public_6c27c8d
        dec eax
        cmp ecx, 1
        jne public_6c27c7c
        neg eax
        sbb eax, eax
        and eax, 0x87
        inc eax
        ret 0xC
        public_6c27c7c : nop
        neg eax
        sbb eax, eax
        and eax, 0xFFFFFF10
        add eax, 0x108
        ret 0xC
        public_6c27c8d : nop
        cmp ecx, 2
        jne public_6c27ca5
        xor edx, edx
        cmp eax, ecx
        setne dl
        dec edx
        and edx, 0xFFFFFFBA
        add edx, 0x48
        mov eax, edx
        ret 0xC
        public_6c27ca5 : nop
        xor ecx, ecx
        cmp eax, 2
        setne cl
        dec ecx
        and ecx, 0xFFFFFE20
        add ecx, 0x208
        mov eax, ecx
        ret 0xC
        UNREACHABLE_TRAP(0x6c27ba0)
    }
}

#undef public_6c27c11
#undef public_6c27c38
#undef public_6c27c61
#undef public_6c27c7c
#undef public_6c27c8d
#undef public_6c27ca5
