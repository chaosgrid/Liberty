#include "RendComp-PCH.h"


#define public_6c30503 _public_6c30503
#define public_6c30505 _public_6c30505
#define public_6c30529 _public_6c30529
#define public_6c3052d _public_6c3052d
#define public_6c30532 _public_6c30532
#define public_6c30542 _public_6c30542
#define public_6c30558 _public_6c30558
#define public_6c30584 _public_6c30584

PROC_DECLARE(0x6c304f0, internal_6c304f0, public_6c304f0);
extern "C" NAKED register_t __cdecl internal_6c304f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_6c365bc]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_6c30542
        mov ebp, dword ptr ss : [esp+0x18]
        public_6c30503 : nop
        mov esi, ebp
        public_6c30505 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_6c3052d
        test cl, cl
        je public_6c30529
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_6c3052d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6c30505
        public_6c30529 : nop
        xor eax, eax
        jmp public_6c30532
        public_6c3052d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6c30532 : nop
        test eax, eax
        je public_6c30558
        mov eax, dword ptr ds : [edi*8+public_6c365c4]
        inc edi
        test eax, eax
        jne public_6c30503
        public_6c30542 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6c30558 : nop
        mov eax, dword ptr ds : [edi*8+public_6c365c0]
        test eax, eax
        jns public_6c30584
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
        public_6c30584 : nop
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
        UNREACHABLE_TRAP(0x6c304f0)
    }
}

#undef public_6c30503
#undef public_6c30505
#undef public_6c30529
#undef public_6c3052d
#undef public_6c30532
#undef public_6c30542
#undef public_6c30558
#undef public_6c30584
