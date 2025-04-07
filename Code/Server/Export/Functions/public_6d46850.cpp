#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d46850);

#define public_6d46868 _public_6d46868
#define public_6d468ae _public_6d468ae
#define public_6d468cc _public_6d468cc
#define public_6d468ed _public_6d468ed
#define public_6d46912 _public_6d46912
#define public_6d46918 _public_6d46918
#define public_6d46923 _public_6d46923

PROC_DECLARE(0x6d46850, internal_6d46850, public_6d46850);
extern "C" NAKED register_t __cdecl internal_6d46850()
{
    __asm
    {
        mov eax, ecx
        mov ecx, dword ptr ss : [esp+8]
        test ecx, ecx
        jle public_6d46923
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        mov ebp, ecx
        public_6d46868 : nop
        mov cl, byte ptr ds : [eax+0x414]
        mov bl, byte ptr ds : [edi]
        inc edi
        test cl, cl
        mov cl, byte ptr ds : [eax+0x415]
        jne public_6d468cc
        mov edx, dword ptr ds : [eax+0x418]
        mov esi, edx
        shl edx, 8
        test cl, cl
        mov ecx, dword ptr ds : [eax+0x404]
        je public_6d468ae
        sub ecx, 8
        shr esi, cl
        xor ecx, ecx
        mov cl, bl
        and esi, 0xFF
        xor esi, ecx
        mov ecx, dword ptr ds : [eax+esi*4]
        xor ecx, edx
        mov dword ptr ds : [eax+0x418], ecx
        jmp public_6d46918
        public_6d468ae : nop
        sub ecx, 8
        shr esi, cl
        and esi, 0xFF
        mov ecx, dword ptr ds : [eax+esi*4]
        xor ecx, edx
        xor edx, edx
        mov dl, bl
        xor ecx, edx
        mov dword ptr ds : [eax+0x418], ecx
        jmp public_6d46918
        public_6d468cc : nop
        test cl, cl
        je public_6d468ed
        mov ecx, dword ptr ds : [eax+0x418]
        mov edx, ecx
        and edx, 0xFF
        movzx esi, bl
        xor edx, esi
        mov edx, dword ptr ds : [eax+edx*4]
        shr ecx, 8
        xor edx, ecx
        jmp public_6d46912
        public_6d468ed : nop
        mov ecx, dword ptr ds : [eax+0x404]
        mov esi, dword ptr ds : [eax+0x418]
        xor edx, edx
        mov dl, bl
        sub ecx, 8
        shl edx, cl
        mov ecx, esi
        and ecx, 0xFF
        xor edx, dword ptr ds : [eax+ecx*4]
        shr esi, 8
        xor edx, esi
        public_6d46912 : nop
        mov dword ptr ds : [eax+0x418], edx
        public_6d46918 : nop
        dec ebp
        jne public_6d46868
        pop edi
        pop esi
        pop ebp
        pop ebx
        public_6d46923 : nop
        ret 8
        UNREACHABLE_TRAP(0x6d46850)
    }
}

#undef public_6d46868
#undef public_6d468ae
#undef public_6d468cc
#undef public_6d468ed
#undef public_6d46912
#undef public_6d46918
#undef public_6d46923
