#include "DebugLib-PCH.h"


#define public_65d2bd3 _public_65d2bd3
#define public_65d2bd5 _public_65d2bd5
#define public_65d2bf9 _public_65d2bf9
#define public_65d2bfd _public_65d2bfd
#define public_65d2c02 _public_65d2c02
#define public_65d2c12 _public_65d2c12
#define public_65d2c28 _public_65d2c28
#define public_65d2c54 _public_65d2c54

PROC_DECLARE(0x65d2bc0, internal_65d2bc0, public_65d2bc0);
extern "C" NAKED register_t __cdecl internal_65d2bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65e1300]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_65d2c12
        mov ebp, dword ptr ss : [esp+0x18]
        public_65d2bd3 : nop
        mov esi, ebp
        public_65d2bd5 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_65d2bfd
        test cl, cl
        je public_65d2bf9
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_65d2bfd
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_65d2bd5
        public_65d2bf9 : nop
        xor eax, eax
        jmp public_65d2c02
        public_65d2bfd : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_65d2c02 : nop
        test eax, eax
        je public_65d2c28
        mov eax, dword ptr ds : [edi*8+public_65e1308]
        inc edi
        test eax, eax
        jne public_65d2bd3
        public_65d2c12 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_65d2c28 : nop
        mov eax, dword ptr ds : [edi*8+public_65e1304]
        test eax, eax
        jns public_65d2c54
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
        public_65d2c54 : nop
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
        UNREACHABLE_TRAP(0x65d2bc0)
    }
}

#undef public_65d2bd3
#undef public_65d2bd5
#undef public_65d2bf9
#undef public_65d2bfd
#undef public_65d2c02
#undef public_65d2c12
#undef public_65d2c28
#undef public_65d2c54
