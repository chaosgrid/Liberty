#include "THORN-PCH.h"


#define public_6f33663 _public_6f33663
#define public_6f33665 _public_6f33665
#define public_6f33689 _public_6f33689
#define public_6f3368d _public_6f3368d
#define public_6f33692 _public_6f33692
#define public_6f336a2 _public_6f336a2
#define public_6f336b8 _public_6f336b8
#define public_6f336e4 _public_6f336e4

PROC_DECLARE(0x6f33650, internal_6f33650, public_6f33650);
extern "C" NAKED register_t __cdecl internal_6f33650()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6f5a9bc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6f336a2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6f33663 : nop
        mov esi, ebp
        public_6f33665 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6f3368d
        test cl, cl
        je public_6f33689
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6f3368d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6f33665
        public_6f33689 : nop
        xor eax, eax
        jmp public_6f33692
        public_6f3368d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6f33692 : nop
        test eax, eax
        je public_6f336b8
        mov eax, dword ptr ds : [edi*8+public_6f5a9c4]
        inc edi
        test eax, eax
        jne public_6f33663
        public_6f336a2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6f336b8 : nop
        mov eax, dword ptr ds : [edi*8+public_6f5a9c0]
        test eax, eax
        jns public_6f336e4
        mov ecx, dword ptr ss : [esp+0x14]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+ecx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6f336e4 : nop
        mov edx, dword ptr ss : [esp+0x14]
        lea esi, ds:[eax+edx]
        mov eax, dword ptr ds : [esi]
        push esi
        call dword ptr ds : [eax+4]
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        mov dword ptr ds : [ecx], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6f33650)
    }
}

#undef public_6f33663
#undef public_6f33665
#undef public_6f33689
#undef public_6f3368d
#undef public_6f33692
#undef public_6f336a2
#undef public_6f336b8
#undef public_6f336e4
