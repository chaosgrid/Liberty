#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_417010);

#define public_417029 _public_417029
#define public_417040 _public_417040
#define public_41704c _public_41704c
#define public_417050 _public_417050
#define public_417060 _public_417060
#define public_41706b _public_41706b

PROC_DECLARE(0x417010, internal_417010, public_417010);
extern "C" NAKED register_t __cdecl internal_417010()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx]
        mov dl, byte ptr ds : [eax+0x14]
        test dl, dl
        push ebx
        jne public_417029
        mov edx, dword ptr ds : [eax+4]
        cmp dword ptr ds : [edx+4], eax
        jne public_417029
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        public_417029 : nop
        mov edx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [edx+0x15]
        test bl, bl
        jne public_417050
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        jne public_41704c
        lea esp, ss:[esp]
        public_417040 : nop
        mov edx, eax
        mov eax, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [eax+0x15]
        test bl, bl
        je public_417040
        public_41704c : nop
        mov dword ptr ds : [ecx], edx
        pop ebx
        ret 
        public_417050 : nop
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        jne public_41706b
        lea esp, ss:[esp]
        public_417060 : nop
        mov dword ptr ds : [ecx], eax
        mov eax, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [eax]
        je public_417060
        public_41706b : nop
        mov dword ptr ds : [ecx], eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x417010)
    }
}

#undef public_417029
#undef public_417040
#undef public_41704c
#undef public_417050
#undef public_417060
#undef public_41706b
