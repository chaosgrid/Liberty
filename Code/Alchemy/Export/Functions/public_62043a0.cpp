#include "Alchemy-PCH.h"


#define public_62043b3 _public_62043b3
#define public_62043b5 _public_62043b5
#define public_62043d9 _public_62043d9
#define public_62043dd _public_62043dd
#define public_62043e2 _public_62043e2
#define public_62043f2 _public_62043f2
#define public_6204408 _public_6204408
#define public_6204437 _public_6204437

PROC_DECLARE(0x62043a0, internal_62043a0, public_62043a0);
extern "C" NAKED register_t __cdecl internal_62043a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624b5f4]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62043f2
        mov ebp, dword ptr ss : [esp+0x18]
        public_62043b3 : nop
        mov esi, ebp
        public_62043b5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_62043dd
        test cl, cl
        je public_62043d9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_62043dd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_62043b5
        public_62043d9 : nop
        xor eax, eax
        jmp public_62043e2
        public_62043dd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_62043e2 : nop
        test eax, eax
        je public_6204408
        mov eax, dword ptr ds : [edi*8+public_624b5fc]
        inc edi
        test eax, eax
        jne public_62043b3
        public_62043f2 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [ecx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_6204408 : nop
        mov eax, dword ptr ds : [edi*8+public_624b5f8]
        mov ecx, dword ptr ss : [esp+0x14]
        test eax, eax
        jns public_6204437
        mov edx, dword ptr ds : [ecx+8]
        and eax, 0x7FFFFFFF
        mov esi, dword ptr ds : [eax+edx]
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        public_6204437 : nop
        mov esi, dword ptr ds : [ecx+8]
        add esi, eax
        push esi
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+4]
        pop edi
        mov eax, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], esi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x62043a0)
    }
}

#undef public_62043b3
#undef public_62043b5
#undef public_62043d9
#undef public_62043dd
#undef public_62043e2
#undef public_62043f2
#undef public_6204408
#undef public_6204437
