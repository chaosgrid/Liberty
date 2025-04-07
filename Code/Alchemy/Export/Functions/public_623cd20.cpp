#include "Alchemy-PCH.h"


#define public_623cd33 _public_623cd33
#define public_623cd35 _public_623cd35
#define public_623cd59 _public_623cd59
#define public_623cd5d _public_623cd5d
#define public_623cd62 _public_623cd62
#define public_623cd72 _public_623cd72
#define public_623cd88 _public_623cd88
#define public_623cdb4 _public_623cdb4

PROC_DECLARE(0x623cd20, internal_623cd20, public_623cd20);
extern "C" NAKED register_t __cdecl internal_623cd20()
{
    __asm
    {
        mov eax, dword ptr ds : [public_624f21c]
        push ebx
        push ebp
        push esi
        push edi
        xor edi, edi
        test eax, eax
        je public_623cd72
        mov ebp, dword ptr ss : [esp+0x18]
        public_623cd33 : nop
        mov esi, ebp
        public_623cd35 : nop
        mov dl, byte ptr ds : [eax]
        mov bl, byte ptr ds : [esi]
        mov cl, dl
        cmp dl, bl
        jne public_623cd5d
        test cl, cl
        je public_623cd59
        mov dl, byte ptr ds : [eax+1]
        mov bl, byte ptr ds : [esi+1]
        mov cl, dl
        cmp dl, bl
        jne public_623cd5d
        add eax, 2
        add esi, 2
        test cl, cl
        jne public_623cd35
        public_623cd59 : nop
        xor eax, eax
        jmp public_623cd62
        public_623cd5d : nop
        sbb eax, eax
        sbb eax, 0xFFFFFFFF
        public_623cd62 : nop
        test eax, eax
        je public_623cd88
        mov eax, dword ptr ds : [edi*8+public_624f224]
        inc edi
        test eax, eax
        jne public_623cd33
        public_623cd72 : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [edx], 0
        mov eax, 0xFFFFFFFD
        pop ebx
        ret 0xC
        public_623cd88 : nop
        mov eax, dword ptr ds : [edi*8+public_624f220]
        test eax, eax
        jns public_623cdb4
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
        public_623cdb4 : nop
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
        UNREACHABLE_TRAP(0x623cd20)
    }
}

#undef public_623cd33
#undef public_623cd35
#undef public_623cd59
#undef public_623cd5d
#undef public_623cd62
#undef public_623cd72
#undef public_623cd88
#undef public_623cdb4
