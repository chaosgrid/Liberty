#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d29e0);

#define public_65d29f3 _public_65d29f3
#define public_65d29f5 _public_65d29f5
#define public_65d2a19 _public_65d2a19
#define public_65d2a1d _public_65d2a1d
#define public_65d2a22 _public_65d2a22
#define public_65d2a32 _public_65d2a32
#define public_65d2a48 _public_65d2a48
#define public_65d2a74 _public_65d2a74

PROC_DECLARE(0x65d29e0, internal_65d29e0, public_65d29e0);
extern "C" NAKED register_t __cdecl internal_65d29e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e12d0]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65d2a32
        mov ebp, dword ptr ss : [esp+0x18]
        public_65d29f3 : nop
        mov esi, ebp
        public_65d29f5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d2a1d
        test cl, cl
        je public_65d2a19
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d2a1d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d29f5
        public_65d2a19 : nop
        xor eax, eax
        jmp public_65d2a22
        public_65d2a1d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d2a22 : nop
        test eax, eax
        je public_65d2a48
        mov eax, dword ptr ds : [edi*8+public_65e12d8]
        inc edi
        test eax, eax
        jne public_65d29f3
        public_65d2a32 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65d2a48 : nop
        mov eax, dword ptr ds : [edi*8+public_65e12d4]
        test eax, eax
        jns public_65d2a74
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
        public_65d2a74 : nop
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
        UNREACHABLE_TRAP(0x65d29e0)
    }
}

#undef public_65d29f3
#undef public_65d29f5
#undef public_65d2a19
#undef public_65d2a1d
#undef public_65d2a22
#undef public_65d2a32
#undef public_65d2a48
#undef public_65d2a74
