#include "DebugLib-PCH.h"


#define public_65d6533 _public_65d6533
#define public_65d6535 _public_65d6535
#define public_65d6559 _public_65d6559
#define public_65d655d _public_65d655d
#define public_65d6562 _public_65d6562
#define public_65d6572 _public_65d6572
#define public_65d6588 _public_65d6588
#define public_65d65b4 _public_65d65b4

PROC_DECLARE(0x65d6520, internal_65d6520, public_65d6520);
extern "C" NAKED register_t __cdecl internal_65d6520()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e14e8]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65d6572
        mov ebp, dword ptr ss : [esp+0x18]
        public_65d6533 : nop
        mov esi, ebp
        public_65d6535 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d655d
        test cl, cl
        je public_65d6559
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d655d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d6535
        public_65d6559 : nop
        xor eax, eax
        jmp public_65d6562
        public_65d655d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d6562 : nop
        test eax, eax
        je public_65d6588
        mov eax, dword ptr ds : [edi*8+public_65e14f0]
        inc edi
        test eax, eax
        jne public_65d6533
        public_65d6572 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65d6588 : nop
        mov eax, dword ptr ds : [edi*8+public_65e14ec]
        test eax, eax
        jns public_65d65b4
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        public_65d65b4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        push esi
        mov eax, dword ptr ds : [esi]
        call dword ptr ds : [eax+4]
        pop edi
        xor eax, eax
        mov ecx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x65d6520)
    }
}

#undef public_65d6533
#undef public_65d6535
#undef public_65d6559
#undef public_65d655d
#undef public_65d6562
#undef public_65d6572
#undef public_65d6588
#undef public_65d65b4
