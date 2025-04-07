#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d37335);

#define public_6d38d49 _public_6d38d49
#define public_6d38d4c _public_6d38d4c
#define public_6d38d74 _public_6d38d74
#define public_6d38d83 _public_6d38d83
#define public_6d38dc9 _public_6d38dc9
#define public_6d38dcb _public_6d38dcb
#define public_6d38def _public_6d38def

PROC_DECLARE(0x6d38d30, internal_6d38d30, public_6d38d30);
extern "C" NAKED register_t __cdecl internal_6d38d30()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push esi
        xor esi, esi
        cmp dword ptr ds : [ecx+0x1048], esi
        push edi
        je public_6d38d49
        push dword ptr ss : [ebp+0x10]
        call public_6d37335
        jmp public_6d38d4c
        public_6d38d49 : nop
        mov eax, dword ptr ss : [ebp+0x10]
        public_6d38d4c : nop
        mov edx, dword ptr ds : [ecx+0x1050]
        imul edx, dword ptr ss : [ebp+8]
        mov edi, dword ptr ds : [ecx+0x1054]
        imul edi, dword ptr ss : [ebp+0xC]
        add edx, edi
        add edx, dword ptr ds : [ecx+0x18]
        cmp dword ptr ds : [ecx+0x1058], esi
        mov dword ptr ss : [ebp+8], esi
        jbe public_6d38def
        lea esi, ds:[eax+8]
        push ebx
        public_6d38d74 : nop
        xor ebx, ebx
        mov dword ptr ss : [ebp+0xC], 0x7F7FFFFF
        mov dword ptr ss : [ebp+0x10], ebx
        lea edi, ds:[ecx+0x38]
        public_6d38d83 : nop
        fld dword ptr ds : [esi-8]
        fsub dword ptr ds : [edi-8]
        fld dword ptr ds : [esi-4]
        fsub dword ptr ds : [edi-4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+4]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ss : [ebp+0xC]
        fnstsw ax
        test ah, 5
        jp public_6d38dc9
        mov ebx, dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [ebp+0xC]
        jmp public_6d38dcb
        public_6d38dc9 : nop
        fstp st(0)
        public_6d38dcb : nop
        inc dword ptr ss : [ebp+0x10]
        add edi, 0x10
        cmp dword ptr ss : [ebp+0x10], 0x100
        jb public_6d38d83
        mov byte ptr ds : [edx], bl
        inc edx
        inc dword ptr ss : [ebp+8]
        mov eax, dword ptr ss : [ebp+8]
        add esi, 0x10
        cmp eax, dword ptr ds : [ecx+0x1058]
        jb public_6d38d74
        pop ebx
        public_6d38def : nop
        pop edi
        pop esi
        pop ebp
        ret 0xC
        UNREACHABLE_TRAP(0x6d38d30)
    }
}

#undef public_6d38d49
#undef public_6d38d4c
#undef public_6d38d74
#undef public_6d38d83
#undef public_6d38dc9
#undef public_6d38dcb
#undef public_6d38def
