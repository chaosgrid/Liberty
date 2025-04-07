#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6358d60);
CLANG_FORWARD_PROC_SYMBOL(public_63590c0);
CLANG_FORWARD_PROC_SYMBOL(public_63590e0);
CLANG_FORWARD_PROC_SYMBOL(public_63591a0);
CLANG_FORWARD_PROC_SYMBOL(public_6359340);
CLANG_FORWARD_PROC_SYMBOL(public_63595c0);

#define public_63591cd _public_63591cd
#define public_635920e _public_635920e
#define public_635922d _public_635922d
#define public_635924b _public_635924b
#define public_6359252 _public_6359252
#define public_635926a _public_635926a
#define public_6359296 _public_6359296
#define public_63592b2 _public_63592b2
#define public_63592dc _public_63592dc
#define public_635930c _public_635930c
#define public_6359316 _public_6359316
#define public_6359329 _public_6359329

PROC_DECLARE(0x63591a0, internal_63591a0, public_63591a0);
extern "C" NAKED register_t __cdecl internal_63591a0()
{
    __asm
    {
        sub esp, 0x14
        mov eax, dword ptr ds : [public_658ab18]
        push ebx
        push ebp
        push esi
        mov edx, ecx
        xor esi, esi
        mov si, word ptr ds : [edx+0x1A]
        xor ebx, ebx
        push edi
        mov dword ptr ss : [esp+0x10], edx
        mov dword ptr ss : [esp+0x20], ebx
        mov dword ptr ss : [esp+0x14], eax
        dec esi
        mov dword ptr ss : [esp+0x18], esi
        js public_6359329
        public_63591cd : nop
        mov ecx, dword ptr ds : [edx+0x1C]
        mov edi, dword ptr ds : [ecx+esi*4]
        mov eax, dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ds : [eax]
        mov eax, dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [edi+0x28]
        and ebp, 0xFFFFFFFC
        and eax, 0xFFFFFF00
        shl eax, 0x10
        shl ebp, 0x1C
        sar ebp, 6
        or ebp, eax
        mov eax, dword ptr ds : [ecx]
        mov ecx, dword ptr ds : [ecx+0x60]
        shl eax, 0x1C
        sar eax, 6
        shl ecx, 0x10
        or eax, ecx
        test eax, ebp
        jne public_6359252
        xor ebp, ebp
        mov bp, word ptr ds : [edi+2]
        dec ebp
        js public_6359252
        public_635920e : nop
        mov eax, dword ptr ds : [edi+4]
        mov esi, dword ptr ds : [eax+ebp*4]
        mov ecx, dword ptr ds : [esi+0x40]
        cmp byte ptr ds : [ecx+0x54], 1
        je public_635922d
        mov eax, dword ptr ds : [edx]
        inc dword ptr ds : [eax+0x60]
        mov ecx, esi
        call public_63595c0
        mov edx, dword ptr ss : [esp+0x10]
        public_635922d : nop
        mov ecx, dword ptr ds : [esi+0x40]
        fld dword ptr ds : [ecx+0x5C]
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 1
        je public_635924b
        mov eax, dword ptr ds : [ecx+0x5C]
        mov dword ptr ss : [esp+0x14], eax
        mov ebx, esi
        mov dword ptr ss : [esp+0x20], edi
        public_635924b : nop
        dec ebp
        jns public_635920e
        mov esi, dword ptr ss : [esp+0x18]
        public_6359252 : nop
        dec esi
        mov dword ptr ss : [esp+0x18], esi
        jns public_63591cd
        test ebx, ebx
        je public_6359329
        mov ebp, 0x74
        public_635926a : nop
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edi, dword ptr ds : [ecx+ebp]
        test edi, edi
        je public_63592b2
        mov eax, dword ptr ds : [edi+0x1B4]
        test eax, eax
        jne public_63592b2
        mov ax, word ptr ds : [edx+0x12]
        cmp ax, word ptr ds : [edx+0x10]
        lea esi, ds:[edx+0x10]
        jb public_6359296
        mov ecx, esi
        call public_63441a0
        mov edx, dword ptr ss : [esp+0x10]
        public_6359296 : nop
        mov eax, dword ptr ds : [esi+4]
        xor ecx, ecx
        mov cx, word ptr ds : [esi+2]
        push edi
        mov dword ptr ds : [eax+ecx*4], edi
        inc word ptr ds : [esi+2]
        mov ecx, edx
        call public_63590c0
        mov edx, dword ptr ss : [esp+0x10]
        public_63592b2 : nop
        sub ebp, 4
        cmp ebp, 0x70
        jge public_635926a
        mov eax, dword ptr ds : [ebx+0x40]
        inc word ptr ds : [eax+0x52]
        mov ecx, dword ptr ds : [ebx+0x40]
        mov edx, dword ptr ds : [ecx+0x58]
        push ebx
        push edx
        lea eax, ss:[esp+0x20]
        push eax
        call public_6358d60
        lea esi, ss:[esp+0x1C]
        mov edi, 2
        public_63592dc : nop
        mov eax, dword ptr ds : [esi]
        test eax, eax
        je public_6359316
        mov ecx, dword ptr ds : [eax]
        test cl, 0xC
        jne public_6359316
        test ch, 3
        jne public_6359316
        mov ecx, dword ptr ds : [eax+0x1B4]
        mov edx, dword ptr ds : [ecx+0x20]
        test edx, edx
        jne public_635930c
        mov edx, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x10]
        push edx
        push eax
        call public_63590e0
        jmp public_6359316
        public_635930c : nop
        mov ecx, dword ptr ss : [esp+0x10]
        push eax
        call public_6359340
        public_6359316 : nop
        sub esi, 4
        dec edi
        jne public_63592dc
        pop edi
        pop esi
        pop ebp
        mov eax, 1
        pop ebx
        add esp, 0x14
        ret 
        public_6359329 : nop
        pop edi
        pop esi
        pop ebp
        xor eax, eax
        pop ebx
        add esp, 0x14
        ret 
        UNREACHABLE_TRAP(0x63591a0)
    }
}

#undef public_63591cd
#undef public_635920e
#undef public_635922d
#undef public_635924b
#undef public_6359252
#undef public_635926a
#undef public_6359296
#undef public_63592b2
#undef public_63592dc
#undef public_635930c
#undef public_6359316
#undef public_6359329
