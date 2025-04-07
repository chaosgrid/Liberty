#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203350);

#define public_6203363 _public_6203363
#define public_6203365 _public_6203365
#define public_6203389 _public_6203389
#define public_620338d _public_620338d
#define public_6203392 _public_6203392
#define public_62033a2 _public_62033a2
#define public_62033b8 _public_62033b8
#define public_62033e4 _public_62033e4

PROC_DECLARE(0x6203350, internal_6203350, public_6203350);
extern "C" NAKED register_t __cdecl internal_6203350()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624b3ac]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_62033a2
        mov ebp, dword ptr ss : [esp+0x18]
        public_6203363 : nop
        mov esi, ebp
        public_6203365 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_620338d
        test cl, cl
        je public_6203389
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_620338d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_6203365
        public_6203389 : nop
        xor eax, eax
        jmp public_6203392
        public_620338d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_6203392 : nop
        test eax, eax
        je public_62033b8
        mov eax, dword ptr ds : [edi*8+public_624b3b4]
        inc edi
        test eax, eax
        jne public_6203363
        public_62033a2 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_62033b8 : nop
        mov eax, dword ptr ds : [edi*8+public_624b3b0]
        test eax, eax
        jns public_62033e4
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
        public_62033e4 : nop
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
        UNREACHABLE_TRAP(0x6203350)
    }
}

#undef public_6203363
#undef public_6203365
#undef public_6203389
#undef public_620338d
#undef public_6203392
#undef public_62033a2
#undef public_62033b8
#undef public_62033e4
