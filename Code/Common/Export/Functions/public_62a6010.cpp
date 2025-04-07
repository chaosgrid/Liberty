#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62a6010);
CLANG_FORWARD_PROC_SYMBOL(public_6391dae);

#define public_62a6031 _public_62a6031
#define public_62a6037 _public_62a6037
#define public_62a6059 _public_62a6059
#define public_62a605f _public_62a605f
#define public_62a6081 _public_62a6081
#define public_62a6087 _public_62a6087
#define public_62a60d1 _public_62a60d1
#define public_62a60dd _public_62a60dd
#define public_62a60ea _public_62a60ea
#define public_62a60f3 _public_62a60f3

PROC_DECLARE(0x62a6010, internal_62a6010, public_62a6010);
extern "C" NAKED register_t __cdecl internal_62a6010()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x10]
        fld dword ptr ds : [esi]
        push edi
        fcomp dword ptr ds : [public_6399408]
        fld dword ptr ds : [esi]
        fnstsw ax
        test ah, 0x41
        jne public_62a6031
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a6037
        public_62a6031 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a6037 : nop
        call public_6391dae
        fld dword ptr ds : [esi+4]
        fcomp dword ptr ds : [public_6399408]
        mov ebx, eax
        fld dword ptr ds : [esi+4]
        fnstsw ax
        test ah, 0x41
        jne public_62a6059
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a605f
        public_62a6059 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a605f : nop
        call public_6391dae
        fld dword ptr ds : [esi+8]
        fcomp dword ptr ds : [public_6399408]
        mov ebp, eax
        fld dword ptr ds : [esi+8]
        fnstsw ax
        test ah, 0x41
        jne public_62a6081
        fadd dword ptr ds : [public_639d20c]
        jmp public_62a6087
        public_62a6081 : nop
        fsub dword ptr ds : [public_639d20c]
        public_62a6087 : nop
        call public_6391dae
        mov edi, eax
        mov eax, ebx
        cdq 
        mov ecx, eax
        xor ecx, edx
        sub ecx, edx
        mov eax, ebp
        cdq 
        mov esi, eax
        xor esi, edx
        sub esi, edx
        mov eax, edi
        cdq 
        xor eax, edx
        sub eax, edx
        sar ecx, 7
        sar esi, 7
        sar eax, 7
        cmp ecx, 0x3FF
        ja public_62a60f3
        cmp esi, 0x1FF
        ja public_62a60f3
        cmp eax, 0x3FF
        ja public_62a60f3
        test ebx, ebx
        jge public_62a60d1
        or ecx, 0x400
        public_62a60d1 : nop
        shl ecx, 0x15
        test edi, edi
        jge public_62a60dd
        or eax, 0x400
        public_62a60dd : nop
        shl eax, 0xA
        test ebp, ebp
        jge public_62a60ea
        or esi, 0x200
        public_62a60ea : nop
        pop edi
        or eax, esi
        pop esi
        pop ebp
        or eax, ecx
        pop ebx
        ret 
        public_62a60f3 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62a6010)
    }
}

#undef public_62a6031
#undef public_62a6037
#undef public_62a6059
#undef public_62a605f
#undef public_62a6081
#undef public_62a6087
#undef public_62a60d1
#undef public_62a60dd
#undef public_62a60ea
#undef public_62a60f3
