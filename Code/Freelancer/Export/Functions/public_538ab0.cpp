#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_538ab0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_538ab6 _public_538ab6
#define public_538ac3 _public_538ac3
#define public_538ac5 _public_538ac5
#define public_538ad6 _public_538ad6
#define public_538adb _public_538adb
#define public_538ae1 _public_538ae1
#define public_538afc _public_538afc
#define public_538b05 _public_538b05
#define public_538b09 _public_538b09

PROC_DECLARE(0x538ab0, internal_538ab0, public_538ab0);
extern "C" NAKED register_t __cdecl internal_538ab0()
{
    __asm
    {
        push ebx
        push esi
        xor ebx, ebx
        xor esi, esi
        public_538ab6 : nop
        cmp esi, ebx
        mov eax, dword ptr ds : [public_67555c]
        jne public_538ac3
        mov esi, eax
        jmp public_538ac5
        public_538ac3 : nop
        mov esi, dword ptr ds : [esi]
        public_538ac5 : nop
        cmp esi, ebx
        je public_538adb
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, ebx
        je public_538ad6
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax]
        public_538ad6 : nop
        mov dword ptr ds : [esi+8], ebx
        jmp public_538ab6
        public_538adb : nop
        cmp eax, ebx
        mov esi, eax
        je public_538b09
        public_538ae1 : nop
        cmp byte ptr ds : [public_675564], bl
        mov eax, esi
        mov esi, dword ptr ds : [esi]
        je public_538afc
        mov ecx, dword ptr ds : [public_675568]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [public_675568], eax
        jmp public_538b05
        public_538afc : nop
        push eax
        call public_5b7e1d
        add esp, 4
        public_538b05 : nop
        cmp esi, ebx
        jne public_538ae1
        public_538b09 : nop
        pop esi
        mov dword ptr ds : [public_675560], ebx
        mov dword ptr ds : [public_67555c], ebx
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x538ab0)
    }
}

#undef public_538ab6
#undef public_538ac3
#undef public_538ac5
#undef public_538ad6
#undef public_538adb
#undef public_538ae1
#undef public_538afc
#undef public_538b05
#undef public_538b09
