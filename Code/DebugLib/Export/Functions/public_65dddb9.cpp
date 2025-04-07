#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65ddb90);
CLANG_FORWARD_PROC_SYMBOL(public_65dddb9);

#define public_65dddc1 _public_65dddc1
#define public_65dddd9 _public_65dddd9
#define public_65ddde8 _public_65ddde8
#define public_65dddef _public_65dddef
#define public_65dddff _public_65dddff
#define public_65dde03 _public_65dde03
#define public_65dde05 _public_65dde05
#define public_65dde1a _public_65dde1a
#define public_65dde25 _public_65dde25
#define public_65dde36 _public_65dde36
#define public_65dde3f _public_65dde3f

PROC_DECLARE(0x65dddb9, internal_65dddb9, public_65dddb9);
extern "C" NAKED register_t __cdecl internal_65dddb9()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x14]
        public_65dddc1 : nop
        cmp dword ptr ds : [public_65e5be0], 1
        jle public_65dddd9
        movzx eax, byte ptr ds : [edi]
        push 8
        push eax
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65ddde8
        public_65dddd9 : nop
        movzx eax, byte ptr ds : [edi]
        mov ecx, dword ptr ds : [public_65e59d0]
        mov al, byte ptr ds : [ecx+eax*2]
        and eax, 8
        public_65ddde8 : nop
        test eax, eax
        je public_65dddef
        inc edi
        jmp public_65dddc1
        public_65dddef : nop
        movzx esi, byte ptr ds : [edi]
        inc edi
        cmp esi, 0x2D
        mov ebp, esi
        je public_65dddff
        cmp esi, 0x2B
        jne public_65dde03
        public_65dddff : nop
        movzx esi, byte ptr ds : [edi]
        inc edi
        public_65dde03 : nop
        xor ebx, ebx
        public_65dde05 : nop
        cmp dword ptr ds : [public_65e5be0], 1
        jle public_65dde1a
        push 4
        push esi
        call public_65ddb90
        pop ecx
        pop ecx
        jmp public_65dde25
        public_65dde1a : nop
        mov eax, dword ptr ds : [public_65e59d0]
        mov al, byte ptr ds : [eax+esi*2]
        and eax, 4
        public_65dde25 : nop
        test eax, eax
        je public_65dde36
        lea eax, ds:[ebx+ebx*4]
        lea ebx, ds:[esi+eax*2-0x30]
        movzx esi, byte ptr ds : [edi]
        inc edi
        jmp public_65dde05
        public_65dde36 : nop
        cmp ebp, 0x2D
        mov eax, ebx
        jne public_65dde3f
        neg eax
        public_65dde3f : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x65dddb9)
    }
}

#undef public_65dddc1
#undef public_65dddd9
#undef public_65ddde8
#undef public_65dddef
#undef public_65dddff
#undef public_65dde03
#undef public_65dde05
#undef public_65dde1a
#undef public_65dde25
#undef public_65dde36
#undef public_65dde3f
